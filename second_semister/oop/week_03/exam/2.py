nums = input()
nums = nums.split("-")
nums = list(map(lambda n: float(n), nums))

result = sum(nums)
print(nums)
print(result)
