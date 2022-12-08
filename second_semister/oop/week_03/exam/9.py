import math


class Num():
    def __init__(self, n=1):
        self.num = n

    def sum(self, a, b):
        return a.num + b.num

    def pow(self, a, b):
        return math.pow(a.num, b.num)


a = Num(10)
b = Num(2)
print(a.sum(a,b))
print(a.pow(a, b))
