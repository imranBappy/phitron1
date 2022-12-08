a = ['oh', 'Emelia', 'to']

s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."

def create_new_string(s):
    s_list = []
    special_characters = "!@#$%^&*()-+?_=,<>/."
    word = ""
    for c in s:
        if c not in special_characters:
            if c == " ":
                s_list.append(word)
                word = ""
            else:
                word += c
    s_list.append(word)
    new_s = ""
    x = list(map(lambda x: x.lower(), a))
    for w in x:
        temp = ""
        for i in range(len(s_list)-1):
            if w == s_list[i].lower():
                temp = s_list[i+1]
        if temp:
            new_s += temp + " "
        temp = ""
    print(new_s)
    f = open("out.txt", "a")
    f.write(new_s)
    f.close()


create_new_string(s)
