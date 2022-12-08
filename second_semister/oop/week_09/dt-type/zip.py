nums = [1, 2, 3]
nums2 = [11, 22, 33]

string = ["one", "two", "three"]
new_obj = list(zip(nums, string))

print(new_obj)
# print(set(new_obj))

x, y = zip(*new_obj)
print(list(x), list(y))
