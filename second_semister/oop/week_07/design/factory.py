class Bike:
    def __init__(self) -> None:
        self.name = "Imran's Baike";
    def __repr__(self) -> str:
        return f"Name : {self.name}"    
class Car:
    def __init__(self) -> None:
        self.name = "Imran's Car";
    def __repr__(self) -> str:
        return f"Name : {self.name}"   
class CNG:
    def __init__(self) -> None:
        self.name = "Imran's CNG";
    def __repr__(self) -> str:
        return f"Name : {self.name}"       


def Factory(type):
    vehicles = {
        "bike" : Bike,
        "car" : Car,
        "cng" : CNG
    }
    return vehicles[type]()

x= Factory('bike')
x= Factory('car')


print(x)