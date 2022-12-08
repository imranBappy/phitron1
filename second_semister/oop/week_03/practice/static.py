class T1:
    count = 0

    def __init__(self):
        T1.count += 1


T1()
T1()
T1()


print(T1.count)
