
s = "x3b4U5i2"
Output = []

for i in range(0, len(s)-1, 2):
    for _ in range(int(s[i+1])):
        Output .append(s[i])


Output.sort(key=lambda c: c.lower())
Output = "".join(Output)
print(Output)
