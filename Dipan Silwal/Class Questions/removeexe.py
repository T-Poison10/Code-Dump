import shutil as sh
import os
files = os.listdir("C:\\Users\\dipan\\OneDrive\\Desktop\\DWIT\\C-Programing\\Practise")
print(files)
for file in files:
    if file.endswith('.exe'):
        os.remove(file)