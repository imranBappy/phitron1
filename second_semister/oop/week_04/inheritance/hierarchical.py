# hierarchical

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = 20

    def __repr__(self):
        return f"Name : {self.name}\tAge : {self.age}"


class Designer(Person):
    def __init__(self, name, age):
        self.skill = "HTML, CSS, JS"
        super().__init__(name, age)


class Programmer(Person):
    def __init__(self, name, age):
        self.name = name
        self.age = age
        self.CGPA = 4.00


imran = Designer("Imran", 29)
print(imran)


bappy = Programmer("Imran", 29)
print(bappy)
print(bappy.CGPA)
