nums = [12, 3, 4, 9, 5, 6]
print(nums)

nums_iter = iter(nums)
try:
    print(next(nums_iter))
    print(next(nums_iter))
    print(next(nums_iter))
    print("I am learning iterlator")
    print(next(nums_iter))
    print(next(nums_iter))
    print(next(nums_iter))
    print(next(nums_iter))
    print(next(nums_iter))
except:
    print("End")
