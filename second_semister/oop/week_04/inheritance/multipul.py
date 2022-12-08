class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __repr__(self):
        return self.name


class Devloper:
    def __init__(self, skill):
        self.skill = skill

# Multiple Inheritance


class Programmer(Person, Devloper):
    def __init__(self, title):
        self.title = title
        Person.__init__(self, "Imran", 20)
        Devloper.__init__(self, "HTML, CSS, PHP")
        # super().__init__("BAPPY", 20)


imran = Programmer("Web Developer")
print(imran.skill)
print(imran.title)

print(imran)
