import SwiftUI

/** Modeled after the tutorial found here: https://www.youtube.com/watch?v=89fps_fP9DM&ab_channel=ScribbleCode **/

struct ImageGallery: View {
    @Namespace var namespace
    
    let dataList: [DataTemp]
    
    @State private var selectedItem: DataTemp?
    @State private var position = CGSize.zero

    var body: some View {
        ZStack {
            ScrollView {
                LazyVGrid(columns: [
                    GridItem(.flexible(minimum: 100, maximum: .infinity), spacing: 2),
                ], spacing: 2) {
                    ForEach(dataList) { data in
                        HStack(spacing: 2) {
                            // Image on the left
                            Image(uiImage: data.image)
                                .resizable()
                                .aspectRatio(contentMode: .fill)
                                .frame(width: UIScreen.main.bounds.height/4, height: UIScreen.main.bounds.height/4)
                                .clipped()
                                .matchedGeometryEffect(
                                    id: data.id,
                                    in: namespace,
                                    isSource: selectedItem == nil
                                )
                                .zIndex(selectedItem == data ? 1 : 0)
                                .onTapGesture {
                                    position = .zero
                                    withAnimation(.spring(response: 0.4, dampingFraction: 0.75)) {
                                        selectedItem = data
                                    }
                                }
                            
                            // VStack for stacking text vertically
                            VStack(alignment: .leading, spacing: 5) {
                                Text("Time: \n\(data.creationDate, formatter: dateFormatter)\n ")
                                    .foregroundColor(Color.primary)
                                Text("Fish Length: \(data.fishLen.map { "\($0)" } ?? "Unavailable")")
                                    .foregroundColor(Color.primary)
                            }
                            .padding(8)
                            .cornerRadius(8)
                        }
                    }
                }
            }


        
            Color.white
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .ignoresSafeArea()
                .opacity(selectedItem == nil ? 0 : min(1, max(0, 1 - abs(Double(position.height) / 800))))
            
            if let selectedItem = selectedItem {
                VStack {
                    Image(uiImage: selectedItem.image)
                        .resizable()
                        .aspectRatio(contentMode: .fit)
                        .clipped()
                        .matchedGeometryEffect(
                            id: selectedItem.id,
                            in: namespace,
                            isSource: self.selectedItem != nil
                        )
                        .zIndex(2)
                        .onTapGesture {
                            withAnimation(.spring(response: 0.4, dampingFraction: 0.75)) {
                                self.selectedItem = nil
                            }
                        }
                        .offset(position)
                        .gesture(
                            DragGesture()
                                .onChanged { value in
                                    self.position = value.translation
                                }
                                .onEnded { value in
                                    withAnimation(.spring(response: 0.4, dampingFraction: 0.75)) {
                                        if abs(self.position.height) > 200 {
                                            self.selectedItem = nil
                                        } else {
                                            self.position = .zero
                                        }
                                    }
                                }
                        )
                    
                    // Textual Information Below the Image
                    VStack(alignment: .leading, spacing: 5) {
                        VStack {
                            Text("Time: \(selectedItem.creationDate, formatter: dateFormatter)")
                                .foregroundColor(.black)
                            Text("Fish Length: \(selectedItem.fishLen.map { "\($0)" } ?? "Unavailable")")
                                .foregroundColor(.black)
                        }
                    }
                    .padding()
                    .background(Color.white)
                    .cornerRadius(8)
                    .shadow(radius: 5)
                    .padding(.top, 10)
                }
                .padding()
            }

        }
    }
}

struct DataTemp: Identifiable, Equatable {
    let id: UUID = .init()
    let image: UIImage
    let creationDate: Date
    // let location: String?
    let fishLen: Int?
}

let dateFormatter: DateFormatter = {
    let formatter = DateFormatter()
    formatter.dateStyle = .medium
    formatter.timeStyle = .short
    return formatter
}()
