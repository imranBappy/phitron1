"""
1 -> Single Inheritance
2 -> Multilaval Inheritance
3 -> Multipul Inheritance 
4 -> Hierarchical Inheritance -> One to many
"""

# Single Inheritance


class Course:
    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price


class JS(Course):
    def __init__(self, name, price, author, data) -> None:
        self.author = author
        self.data = data
        super().__init__(name, price)

    def __repr__(self) -> str:
        return f"Name: {self.name}\nPrice: {self.price}\nAuthor: {self.author}"


imran = JS("All You Need To Know JS", 200, "Imran Hosen", "30/12/2022")

# print(imran)


# Multilabel Inheritance
class Auth:
    def __init__(self, email, password) -> None:
        self.email = email
        self.password = password


class Admin(Auth):
    def __init__(self, name, email, password) -> None:
        self.name = name
        super().__init__(email, password)


class User(Admin):
    def __init__(self, name, email, phone, password) -> None:
        self.phone = phone
        super().__init__(name, email, password)

    def __repr__(self) -> str:
        return f"Name : {self.name}\nEmail : {self.email}"


bappy = User("Imran Hossen", "imran@gmail.com", "01724825061", "pass123")

# print(bappy)


# Multiple Inheritance


class Driving:
    def __init__(self, is_car, licensc) -> None:
        self.is_car = is_car
        self.licensc = licensc

    def speed(self):
        return 100


class Programmig:
    def __init__(self, is_pc, langs) -> None:
        self.is_car = is_pc
        self.languages = langs

    def typing_speed(self):
        return 30


class User(Driving, Programmig):
    def __init__(self, name) -> None:
        self.name = name
        Driving.__init__(self, True, "Dhaka-A-334")
        Programmig.__init__(self, True, "PY, JS, CPP, C")

    def __repr__(self):
        return f"Name: {self.name}\nis_car: {self.is_car}\nlanguages: {self.languages}"


# roky = User("Imran")
# print(roky)
# print(roky.typing_speed())
# print(roky.speed())

# Hierarchical Inheritance


class BasiceUser:
    def __init__(self, email, password) -> None:
        self.email = email
        self.password = password


class MyUser(BasiceUser):
    pass


class Admin(BasiceUser):
    pass


class Demo(BasiceUser):
    pass
