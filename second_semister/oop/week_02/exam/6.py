def clean_string(text):
    output = ""
    for c in text:
        if 'a' <= c.lower() and c.lower() <= 'z':
            output += c
    print(output)
    return output

s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"
output = clean_string(s)
print(output)
