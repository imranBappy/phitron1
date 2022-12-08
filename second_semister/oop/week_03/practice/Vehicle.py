class Vehicle:
    types = "CAR"

    def __init__(self, name, mileage, capacity):
        self.name = name
        self.mileage = mileage
        self.capacity = capacity


class Bus(Vehicle):
    def __init__(self, name, mileage, capacity, color):
        self.color = color
        Vehicle.__init__(self, name, mileage, capacity)

    def show(self):
        print(
            f"\nName : {self.name}\nMileage : {self.mileage}\nCapacity : {self.capacity}\nColor : {self.color}\nType : {self.types}")

    def setter(self, key):
        self._key = key

    def getter(self):
        try:
            if self._key:
                print(self._key)
        except:
            print("None")
        finally:
            print("Done!")

    def __str__(self):
        print("Name : {self.name}\nMileage : {self.mileage}".format(self=self))
        return "Name : {self.name}\nMileage : {self.mileage}".format(self=self)


class X:
    pass


school_bus = Bus("Noha", 5, 100, "Dark")
school_bus.show()
number = 80

print(type(school_bus))
print(Bus.types)
school_bus.setter("12345")
school_bus.getter()
print()
str(school_bus)

# print(isinstance(school_bus, Bus))  # check instance

# print(issubclass(Bus, Vehicle))  # check is subclass
# print(issubclass(Vehicle, Bus))
