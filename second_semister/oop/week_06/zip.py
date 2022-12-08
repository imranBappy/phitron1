from zipfile import ZipFile
import io

file = open("hello.txt", "w")
file.write("Hello World")
file.close()


with ZipFile("out.zip", "w") as zip:
    zip.printdir()

    # zip.write(file)
