from abc import ABC, abstractmethod

from time import sleep


class Vehicle(ABC):
    speed = {"car": 20, "bike": 50, "cng": 15}

    def __init__(self, vehicle_type, license_plate, rate, driver) -> None:
        self.vehicle_type = vehicle_type
        self.rate = rate
        self.driver = driver
        self.speed = self.speed[vehicle_type]
        self.license_plate = license_plate
        self.status = "available"

    @abstractmethod
    def start_driving(self):
        pass

    @abstractmethod
    def trip_finished(self):
        pass


class Car(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate, driver) -> None:
        super().__init__(
            vehicle_type,
            license_plate,
            rate,
            driver,
        )

    def start_driving(self, start, destination):
        print(self.vehicle_type, "started")
        self.status = "unavailable"
        print(self.vehicle_type, self.license_plate, " : started")
        distance = abs(start - destination)
        for i in range(0, distance):
            sleep(0.2)
            print(f"Driving:{self.license_plate} current position : {i} of {distance}")

        self.trip_finished()

    def trip_finished(self):
        self.status = "available"
        print(self.vehicle_type, "complate trip")
        print(f"Finished :{self.license_plate} ")


class Bike(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate, driver) -> None:
        super().__init__(
            vehicle_type,
            license_plate,
            rate,
            driver,
        )

    def start_driving(self):
        print(self.vehicle_type, "started")
        self.status = "unavailable"
        return super().start_driving()

    def trip_finished(self):
        self.status = "available"
        print(self.vehicle_type, "complate trip")
        return super().trip_finished()


class Cng(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate, driver) -> None:
        super().__init__(
            vehicle_type,
            license_plate,
            rate,
            driver,
        )

    def start_driving(self):
        print(self.vehicle_type, "started")
        self.status = "unavailable"

        return super().start_driving()

    def trip_finished(self):
        self.status = "available"
        print(self.vehicle_type, "complate trip")
        return super().trip_finished()


if __name__ == "__main__":
    pass
