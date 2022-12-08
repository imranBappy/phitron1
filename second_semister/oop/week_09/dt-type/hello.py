# lis = [1, 2, 3, 4, [5, 6, [6, 7, 88, [67, 7, 8, 81]]]]


# def searching(l, target):
#     for i in l:
#         if target == i:
#             return l
#         if i.__class__.__name__ == "list":
#             return searching(i, target)


# result = searching(lis, 8)

# print(result)

# print(dir(lis))


# a = {1: "one", 2: "tow", 3: {4: "four"}}
# print(a.get(3, False).get(4, False))
# print(dir(a))
# print(a.__class__.__name__)

# l = [(1, 2), (3, 4)]
# a = dict(l)
# # a.pop(1)
# a[10] = 100;
# # print(a[1])
# print(list(a.keys()))
# print(list(a.values()))

# st = {1,2,3,3,23}
# print(st)

# st.add(199)
# print(st.pop())
# print(st.remove(2))
# print(st)
# print(dir(st))


s = "12 I love Bangladesh"


# print(s[::-1]) : shortcut
# l = [1, 2, 3]

# print(s[0].isalpha())
# print(s[0].isalnum())
# print(s.isalnum())

r = slice(0, 10)
# formal
print(s[r])
