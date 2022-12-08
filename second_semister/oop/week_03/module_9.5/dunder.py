# dunder method
# magic method
# spcial method

class Bank:
    def __init__(self, balane, name):
        self.balance = balane
        self.name = name

    def __add__(self, other):
        return self.balance + other.balance

    def __sub__(self, other):
        return (self.balance - other.balance)
    

b = Bank(7000, "Grammen Bank")
b2 = Bank(5000, "Asia Bank")

tow_bank = b - b2

print(tow_bank)

print(b.balance)
print(b2.balance)
