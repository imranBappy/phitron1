class Bank:
    def __init__(self, name, pas, balance):
        self.name = name
        self._password = pas
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 10000

    def get_balance(self):
        print(self.balance)
        return self.balance

    def withdraw(self, ammount, pas):
        if self._password != pas:
            print("You Password Worng!")
        elif self.min_withdraw > ammount:
            print(f"No mony for you, Minmum withdraw : {self.min_withdraw}")
        elif self.max_withdraw < ammount:
            print(f"You crossed max limit : {self.max_withdraw}")
        elif self.balance < ammount:
            print("You have not enough mony")
        else:
            self.balance -= ammount
            return ammount

    def deposit(self, ammout):
        self.balance += ammout


imran = Bank("Imran", 123, 10)
imran.deposit(1000)
imran.withdraw(100, 123)
imran.get_balance()

# print(imran.__dict__)
print(imran._password)
