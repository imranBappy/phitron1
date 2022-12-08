import keyboard

with open("File.txt", "r") as f:
    pages = f.read()

pages = pages.split("--")

i = 0
print(pages[i])
i += 1

while True:
    print("\n[enter - read more, press q to quit]")
    key = input()
    try:
        if len(pages) <= i:
            i = 0

        if keyboard.read_key() == "q":
            break

        elif key == "":

            print(pages[i])
            keyboard.read_key()

            i += 1
        elif key == "-1":

            print(pages[i - 1])
            i -= 1

        else:
            n = int(key)
            if len(pages) <= n:
                print(pages[i])
                i += 1
            else:
                i = n
                print(pages[i-1])
    except:
        pass
