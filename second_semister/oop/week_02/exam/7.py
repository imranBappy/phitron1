def replace_comma_with_space(text):
    newStr = ""
    for c in text:
        if c != ",":
            newStr += c
        else:
            newStr += " "
    return newStr


s = "I,have,been,practising,python,since,the,course,started"

output = replace_comma_with_space(s)
print(output)
