anagrams = ["eat", "ate", "done", "tea", "soup", "node"]

s = {}
for i in anagrams:
    arr = "".join(sorted(i, key=str.lower))
    if arr in s:
        s[arr].append(i)
    else:
        s[arr] = [i]
anagrams = []
for key, valus in s.items():
    anagrams.append(valus)

print(anagrams)
