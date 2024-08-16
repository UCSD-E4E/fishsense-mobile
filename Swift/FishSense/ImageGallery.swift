import SwiftUI

/** Modeled after the tutorial found here: https://www.youtube.com/watch?v=89fps_fP9DM&ab_channel=ScribbleCode **/

struct ImageGallery: View {
    @Namespace var namespace
    
    let dataList: [DataTemp] // Might need to swap out to [FishData] later
    
    @State private var selectedItem: DataTemp?
    @State private var position = CGSize.zero
    
    var body: some View {
        ZStack {
            ScrollView {
                LazyVGrid(columns: [
                    GridItem(.flexible(minimum: 100, maximum: .infinity), spacing: 2),
                ], spacing: 2) {
                    Button("Upload (\(dataList.count))", action: {
                        let fileManager = FileManager.default;
                        
                        if let documentsDirectory = fileManager.urls(for: .documentDirectory, in: .userDomainMask).first {
                            do {
                                let tmpURL = URL(fileURLWithPath: NSTemporaryDirectory()).appendingPathComponent(UUID().uuidString)
                                let zipUrl = try documentsDirectory.zip(toFileAt: tmpURL)
                                
                                var fileSizeValue: UInt64 = 0
                                        
                                do {
                                    
                                    let fileAttribute: [FileAttributeKey : Any] = try FileManager.default.attributesOfItem(atPath: zipUrl.path)
                                    
                                    if let fileNumberSize: NSNumber = fileAttribute[FileAttributeKey.size] as? NSNumber {
                                        fileSizeValue = UInt64(truncating: fileNumberSize)
                                        
                                        let byteCountFormatter: ByteCountFormatter = ByteCountFormatter()
                                        byteCountFormatter.countStyle = ByteCountFormatter.CountStyle.file
                                        
                                        byteCountFormatter.allowedUnits = ByteCountFormatter.Units.useBytes
                                        print(byteCountFormatter.string(fromByteCount: Int64(fileSizeValue)))

                                        byteCountFormatter.allowedUnits = ByteCountFormatter.Units.useKB
                                        print(byteCountFormatter.string(fromByteCount: Int64(fileSizeValue)))

                                        byteCountFormatter.allowedUnits = ByteCountFormatter.Units.useMB
                                        print(byteCountFormatter.string(fromByteCount: Int64(fileSizeValue)))
                                        
                                        let timestamp = Date().timeIntervalSince1970
                                        try fileManager.copyItem(at: zipUrl, to: documentsDirectory.appendingPathComponent("data_\(timestamp).zip"))
                                    }
                                    
                                } catch {
                                    print(error.localizedDescription)
                                }
                            }
                            catch {
                                print("Error occurred: \(error)")
                            }
                        }
                    }
                    //
                    //THIS IS WHERE I WOULD LIKE TO PUT A DELETE BUTTON NEXT TO THE IMPORT BUTTON
                    //I would like for it to display a message and ask, "Before proceeding, are you sure you want to delete all data?"  ( YES | NO )
                    //
                    )
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
                                Text("Fish Length: \(data.fishLen?.map { "\($0)" }.joined(separator: ", ") ?? "Unavailable")") // Adjusted the code, so it doesn't display brackets of the array
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
                            Text("Fish Length: \(selectedItem.fishLen?.map { "\($0)" }.joined(separator: ", ") ?? "Unavailable")") // Adjusted the code, so it doesn't display brackets of the array
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
    let fishLen: [Int64]? // I modified fishLen to handle an optional int64 array, if you're wondering why optional, sometimes there are errors with capturing fish length and we get invalid lengths, so by having the optional, we can account for this error values
}

let dateFormatter: DateFormatter = {
    let formatter = DateFormatter()
    formatter.dateStyle = .medium
    formatter.timeStyle = .short
    return formatter
}()
