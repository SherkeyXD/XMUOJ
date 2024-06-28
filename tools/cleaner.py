# Clean main.exe
from pathlib import Path


def clean_exe(pattern: str = "main.exe"):
    main_exe = list(Path(__file__).parent.parent.glob(f"**/{pattern}"))
    for file in main_exe:
        file.unlink()

def clean_dir(pattern: str = "main"):
    main_dir = list(Path(__file__).parent.parent.glob(f"**/{pattern}"))
    for file in main_dir:
        if file.is_dir():
            for f in file.glob("*"):
                f.unlink()
            file.rmdir()