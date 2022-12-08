import time
from functools import cache


@cache
def fib(n):
    if n <= 1:
        return 1
    return fib(n-1) + fib(n-2)


start = time.time()
for i in range(40):
    result = fib(i)
    print(result)

end = time.time()

time = (end - start) * 1000
print(f"total time {time}")
# 31160.05802154541
