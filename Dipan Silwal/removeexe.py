import shutil as sh
import os
from tkinter import filedialog
path = filedialog.askdirectory()
files = os.listdir(path)
for file in files:
    if file.endswith('.exe'):
        os.remove(f"{path}\\{file}")