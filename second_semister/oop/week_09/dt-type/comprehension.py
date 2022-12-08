lis = ["Programming-Hero", "Phitron", "CodeWithImran"]

new_lis = [item.upper() for item in lis]

# print(new_lis)

one_to_ten = list(range(1, 10))

# print(one_to_ten)

hello = "Hello"

# s_lis = [c for c in hello]
# print(s_lis)

# even_lis = ["Even" if num % 2 == 0 else "Odd" for num in range(1, 10)]

# print(even_lis)


# pair_lis = [(a, b) for a in [1, 2, 5, 6, 7] for b in [3, 4, 8, 9, 10] if a != b]
# print(pair_lis)
# for a in [1, 2, 5, 6, 7]:
#     for b in [3, 4, 8, 9, 10]:
#         if a != b:
#             pair_lis.append((a, b))

# print(pair_lis)

# dct_gen = {i: i + 10 for i in range(10)}
# print(dct_gen)

# dct = {"jack": 40, "Imran": 35, "Rakib": 19, "Rohan": 20}

# new_dct = {key: value for key, value in dct.items() if value % 2 != 0}
# print(new_dct)


# dct = {"jack": 40, "Imran": 35, "Rakib": 19, "Rohan": 20}
# new_dct = {key: value for key, value in dct.items() if value > 20}
# print(new_dct)

# dct = {"jack": 40, "Imran": 35, "Rakib": 19, "Rohan": 20}
# new_dct = {key: "Old" if value > 20 else "Young" for key, value in dct.items()}

# print(new_dct)

# dct = {k1:{k2:k1 * k2} for k2 in range(6) for k1 in range(5)}
dct = {}

for k2 in range(6):
    for k1 in range(5):
        dct[k1] = {k2:k1*k2}
        


print(dct)