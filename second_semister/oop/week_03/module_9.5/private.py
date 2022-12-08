class User:
    def __init__(self, name, password, balance):
        self.name = name
        self.__password = password
        self.balance = balance

    def show_password(self):
        print(User.__password)


a = User("Imran", "pass123", 120)

print(a.balance)
# print(a.__password)

print(a._User__password)
