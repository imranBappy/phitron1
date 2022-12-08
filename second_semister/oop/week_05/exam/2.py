import shutil

width, __ = shutil.get_terminal_size()

a = "I am sure that the shells are seashore shells. So if she sells seashells on the seashore, The shells that she sells are seashells, I am sure She sells seashells on the seashore;"

s = ""
for i in a:
    if i == ",":
        i += "-"
    elif i == ".":
        i += "-"
    s += i

a = s.split("-")

for sentence in a:
    print(sentence.center(width))
