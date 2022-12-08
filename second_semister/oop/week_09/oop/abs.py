from abc import ABC, abstractmethod


class Vehicle(ABC):
    def __init__(self) -> None:
        self.color = "red"

    @abstractmethod
    def run(self):
        pass

    @abstractmethod
    def head_light(self):
        pass


class Bike(Vehicle):
    def __init__(self) -> None:
        self.name = "Imran's Bike"
        super().__init__()

    def run(self):
        pass

    # def head_light(self):
    #     pass


suzuki = Bike()
print(suzuki.name)
print(suzuki.color)
