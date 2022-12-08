def nearly_equal(x, y):
    i = 0
    j = 0
    while i < len(x) and j < len(y):
        if x[i] == y[j]:
            i += 1
            j += 1
        else:
            j += 1

    if i == len(x):
        print(True)
    else:
        print(False)


x = "perl"
y = "pearl"
nearly_equal(x, y)
