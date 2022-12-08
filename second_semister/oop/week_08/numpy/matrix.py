import numpy as np

one_d = np.array([1, 2, 3, 4])
tow_d = np.array([[1, 2], [3, 4]])
three_d = np.array(
    [
        [[1, 1], [2, 2]],
        [[3, 3], [4, 4]],
    ]
)


# print(one_d)
# print(tow_d)
# print(three_d)


change = one_d.reshape(2, 2)

change2 = one_d.reshape(2, 2)

# change = np.flip(change)

# print(change, change2)
# print()
# print(change + change2)

# print(one_d[0])
# print(one_d.size)
print(three_d.ndim)
print(three_d.shape)
print(three_d.dtype)


# print(one_d)
#transportion engineering

# print(three_d.flatten())
x = one_d.astype("f")
# print(x.dtype)

print(three_d)

print(three_d.sort())
print(three_d)
