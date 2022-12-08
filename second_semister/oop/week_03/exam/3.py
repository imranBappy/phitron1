s = "Programming Hero is the best"
s = s.split(" ")
s = map(lambda w: "".join(list(reversed(w))), s)
s = " ".join(list(s))

print(s)
