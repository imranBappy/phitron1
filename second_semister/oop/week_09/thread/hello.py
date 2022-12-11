# multithreading in python

import time
import threading


def f1():
    for _ in range(10000000):
        _ += _
    print("end")


def f2():
    for _ in range(10000000):
        _ += _
    print("end")


def f3():
    for _ in range(10000000):
        _ += _
    print("end")


def f4():
    for _ in range(10000000):
        _ += _
    print("end4")


print("hello1")

all_thread = [
    threading.Thread(target=f1),
    threading.Thread(target=f2),
    threading.Thread(target=f3),
]


for t in all_thread:
    t.start()
    t.join()

# time.sleep(1)

print("hello2")
