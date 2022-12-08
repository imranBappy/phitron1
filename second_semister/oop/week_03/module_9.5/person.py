class Person:
    def __init__(self, name, age, height):
        self.name = name
        self.age = age
        self.height = height

    def __call__(self):
        print(self.name)

    def __len__(self):
        print(self.height)
        return self.height

    def __add__(self, other):
        print(self.age + other.age)
        return 1

    def __eq__(self, o):
        print(self.name == o.name)


imran = Person("Imran", 21, 6)
sojib = Person("Sojib", 20, 5.7)

# imran + sojib
# print(len(imran))
imran()
imran == sojib
