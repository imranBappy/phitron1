class Person:
    def __init__(self, id):
        self.id = id


sam = Person(100)
sam.__dict__['age'] = 49

print(sam.age + len(sam.__dict__))
