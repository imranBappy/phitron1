class Person:
    def __init__(self, name, age, gender):
        self.name = name
        self.age = age
        self.gender = gender

    def print_person(self):
        print(f"Name : {self.name}")
        print(f"Age : {self.age}")
        print(f"Gender : {self.gender}\n")


imran = Person("Imran Hossen", 21, "Maile")
mehedi = Person("Mehedi Hossen", 2, "Pola")


imran.print_person()
mehedi.print_person()
