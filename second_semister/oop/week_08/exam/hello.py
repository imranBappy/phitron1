# def hello():
#     taka = 10
#     taka = taka + taka
#     return taka


# print(hello())
# print(hello())


taka1 = 10


def hello1():
    sum = taka1 + taka1
    print(sum)
    global taka1
    taka1 = 12
    # taka1 = sum
    # return taka1


print(hello1())
print(hello1())
