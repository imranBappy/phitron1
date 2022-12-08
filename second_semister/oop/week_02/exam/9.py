def replace_word():
    replace_with = ["chief", "thief", "superintendent",
                    "sweeper", "married", "left", "tried", "died"]
    s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."
    s = s.split(" ")
    for i in range(len(s)):
        for j in range(len(replace_with)-1):
            if s[i] == replace_with[j]:
                falg = 0
                s[i] = replace_with[j+1]
                break
    print(" ".join(s))


replace_word()
