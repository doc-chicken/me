import os
import os.path
import subprocess

result = 0
command = ("netstat -ano")
fOutput = ("file.txt")
filePath = ("./file.txt")

def makefile():
    with open(fOutput, 'w') as f:
           subprocess.call(command, stdout=f)
def detection():  
    fopen = open(fOutput, 'r')
    row = fopen.readlines()
    for line in row:
        if line.find("TCP"):
            print("works")
detection()


if os.path.exists(filePath):
    userOverwrite = input("A previous log file already exists. Would you like to overwrite it?(Y/N)  ")
    if (userOverwrite == "Y" or userOverwrite == "y"):
        makefile()
        detection()
    else:
        print("Overwrite cancelled. Proceeding detection with current log file.")
        makefile()
        detection()
else:
    makefile()
    detection()