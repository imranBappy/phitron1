n = input()

for _ in range(n):
    a = input()
    b = input()
    c = input()

    l = [a, b, c]

    big = a
    small = c

    for a in l:
        if a > big:
            big = a

    for a in l:
        if a < big:
            small = a

    for a in l:
        if not (a == big or small == a):
            print(a)
            break
