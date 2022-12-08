import keyboard

with open("File.txt", "r") as f:
    pages = f.read()

pages = pages.split("--")

i = 0
print(pages[i])
i += 1

while True:
    print()
    print("[enter - read more, press q to quit]")
    print()
    key = keyboard.read_key()
    if key == "q":
        break
    elif key == "enter":
        print(pages[i])
        i += 1
        key = keyboard.read_key()
    if len(pages) == i:
        i = 0
