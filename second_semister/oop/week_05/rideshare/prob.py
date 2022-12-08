import keyboard

with open("File.txt", "r") as f:
    page = f.read()

page = page.split("--")
print(page)
i = 0
print(page[i])
i += 1

while True:
    k = keyboard.read_key()
    if k == "q":
        print("print how..")
        break
    elif k == "enter":
        print(page[i])
        i += 1
        k = keyboard.read_key()
    if len(page) == i:
        i = 0
