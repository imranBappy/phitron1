# class Vehicle:
#     def __init__(self, name, licence, price):
#         self.name, self.licence, self.price = name, licence, price

#     def __repr__(self):
#         return f"Name : {self.name}\nlicence : {self.licence}\nprice : {self.price}"


# class Bike(Vehicle):
#     def __init__(self, name, licence, price):
#         # super().__init__(name, licence, price)
#         # Vehicle.__init__(self, name, licence, price)
#         self.licence = "wowo",
#         self.name = "wj",
#         self.price = "dsad"


# suzuki = Bike("Suzuki", 12324, 120000)

# print(suzuki)

class Base:
    def __init__(self):
        print("hello")
        self.name = "Bappy"


class B(Base):
    pass


B()
print(B().name)