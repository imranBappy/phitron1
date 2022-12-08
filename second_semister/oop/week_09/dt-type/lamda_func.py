import functools


# def greet():
#     print("Good Morning")

# greet()
# result = lambda a, b: a + b
# print(result(1,3))
# s = "Phitron"
# result = lambda s: s.upper()[::-1]
# print(result(s))


mx = lambda x, y=23: x if (x > y) else y
# print(mx(12))
# print(mx(10, max(40, 20)))

li = [2, 3, 4, 5]
# newList = map(lambda x: x * 2, li)
# newList2 = [item * 2 for item in li]
# newList2 = [lambda x=item: x * 2 for item in li]

# for i in newList2:
#     print(i())

# print(list(newList))


even_list = filter(lambda item: item % 2 == 0, li)

sum = functools.reduce(lambda a, b: a + b, li)
# print(list(even_list))
print(sum)

print(dir(functools))