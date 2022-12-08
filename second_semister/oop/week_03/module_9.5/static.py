class Shopping:
    total = []

    def __init__(self, amount):
        self.total.append(amount)

    @classmethod
    def add(self, amount):
        print(self.mul(2, amount))
        self.total.append(amount)

    @staticmethod
    def mul(a, b):
        return a * b


s1 = Shopping(10)
s1.add(10)

s2 = Shopping(10)
s2.add(10)

s = Shopping(1)

print(Shopping.mul(20, 3))
print(s.mul(2, 3))
