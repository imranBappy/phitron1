file = open("words.dat", "w")
word = ""
count = 0
delet_list = ["END"]
ls = []
while word != "END":
    count += 1
    word = input("Enter a word (enter END to quit): ")
    ls.append(word)
    for words in ls:
        for i in delet_list:
            words = words.replace(i, "")
    file.write(words + "\n")
    if word == "":
        break
file.close()

print()
print("File Name: words.dat")
print("Stored words:", count)

clean_val_ls = []
with open("words.dat", "r") as f:
    f = f.readlines()

    for i in f:
        val = i.strip()
        clean_val_ls.append(val)

len = len(clean_val_ls)
for i, item in enumerate(clean_val_ls):
    if i + 1 < len:
        print(f"{i+1}.{item}")
    elif len == i + 1:
        print(f"{len}.END")
