nums = [12, 3, 4, 9, 5, 6]
print(nums)


def get_gen(nums):
    for i in nums:
        yield i


result = get_gen(nums)
print(next(result))
print(next(result))
print(next(result))
for _ in range(3):
    print("I am learing Genarator")
print(next(result))
print(next(result))
print(next(result))


# def test_yeild():
#     print("hello")
#     yield 100
#     print("world")
#     return 600


# print(next(test_yeild()))
# print(next(test_yeild()))
# print(next(test_yeild()))
