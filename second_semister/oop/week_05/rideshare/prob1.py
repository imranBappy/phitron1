import keyboard

with open("File.txt", "r") as f:
    page = f.read()

page = page.split("--")
print(page)
i = 0
print(page[i])
i += 1

while True:
    k = input()
    try:
        if len(page) <= i:
            i = 0
        if k == "q":
            print("print how..")
            break
        elif k == "":
            print(page[i])
            i += 1
        else:

            num = int(k)
            if len(page) <= num:
                print(page[i])
                i += 1
            else:
                i = num
                print(page[i])
    except NameError:
        print("Name error")
        pass
    except TypeError:
        print("Name error")
        pass
    except:
        print("")
