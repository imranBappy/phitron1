#

import math
import time


def time(func):
    def inner(*arge, **keyArges):
        print("Start program")
        func(*arge, **keyArges)
        print("End program")
    return inner


@time
def hello(n):
    x = math.factorial(n)
    print(x)

# resutl = time(hello)
# resutl(n=3)


# time(hello)(10)
hello(20)