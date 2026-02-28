from pathlib import Path
from urllib.parse import urlparse

import requests

def __download_and_extract(zip_url: str, extract_to: Path):
    extract_to.mkdir(parents=True, exist_ok=True)

    parsed_url = urlparse(zip_url)
    filename = Path(parsed_url.path).name
    zip_path = extract_to / filename
    target_path = extract_to / zip_path.stem

    if not zip_path.exists():
        print(f"Downloading {zip_url} to {zip_path}...")
        response = requests.get(zip_url)
        response.raise_for_status()
        zip_path.write_bytes(response.content)

    if not target_path.exists():
        print(f"Extracting {zip_path} to {target_path}...")
        import zipfile
        with zipfile.ZipFile(zip_path, 'r') as zip_ref:
            zip_ref.extractall(target_path)

def __ios():
    opencv_framework_url = "https://github.com/UCSD-E4E/fishsense-mobile-thirdparty/releases/latest/download/opencv2.xcframework.zip"
    onnxruntime_framework_url = "https://github.com/UCSD-E4E/fishsense-mobile-thirdparty/releases/latest/download/onnxruntime.xcframework.zip"
    onnxruntime_build_url = "https://github.com/UCSD-E4E/fishsense-mobile-thirdparty/releases/latest/download/onnxruntime-build.zip"

    __download_and_extract(opencv_framework_url, Path("./libs"))
    __download_and_extract(onnxruntime_framework_url, Path("./libs"))
    __download_and_extract(onnxruntime_build_url, Path("./libs"))
    
def main():
    __ios()

if __name__ == "__main__":
    main()