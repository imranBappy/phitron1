l = ["This", "is", "very", "fantastic"]


def create_string():
    s = ""
    for i in range(len(l)-1):
        s += l[i] + " "
    s += l[len(l)-1]
    print(s)

create_string()
