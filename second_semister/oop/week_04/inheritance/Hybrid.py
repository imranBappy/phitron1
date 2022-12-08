# hybrid inheritance
class Person:
    def __init__(self, name):
        self.name = name

    def __repr__(self):
        return f"name : {self.name}"


class Std(Person):
    def __init__(self, name, id):
        super().__init__(name)
        self.id = id


class Programmer:
    def __init__(self, skill):
        self.skill = skill


class Employ(Std, Programmer):
    def __init__(self, name, id):
        Std.__init__(self, name, id)
        Programmer.__init__(self, "HTML, CSS, JS")


imran = Employ("Imran", 10)
bappy = Std("Bappy", 10)


print(imran, imran.skill)
print(bappy)
