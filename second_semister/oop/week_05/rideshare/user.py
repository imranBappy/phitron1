import hashlib
from brta import Brta
from Vehicles import Car, Bike, Cng
from ride_maneger import uber
import threading

license_authority = Brta()
from Storage import DBMS


class User(DBMS):
    def __init__(self, name, email, password) -> None:
        self.name = name
        self.email = email
        self.__salt = "12dashj".encode()
        self.password = self.pwd_encryption(password)
        super().__init__("ride_share.db")
        self.tb_create("users")
        self.__register(name, email)

    def pwd_encryption(self, pwd):
        pwd = hashlib.pbkdf2_hmac("sha256", pwd.encode(), self.__salt, 100000)
        return pwd.hex()

    def __register(self, name, email):
        user = self.query(email=email)
        if len(user) == 0:
            self.db_insert([(name, email, self.password)])
        else:
            # print("This email not available")
            pass

    @staticmethod
    def log_in(self, email, pwd):
        user = self.query(email=email)
        pwd_encrypted = self.pwd_encryption(pwd)
        if len(user):
            user = user[0]
            if pwd_encrypted == user[3]:
                print("Logined!")
            else:
                print("Password Worng!")
        else:
            print("User Not Found!")


class Rider(User):
    def __init__(self, name, email, password, location, balance=0) -> None:
        self.location = location
        self.balance = balance
        self.__trip_histroy = []
        super().__init__(name, email, password)

    def set_location(self, location):
        self.location = location

    def get_location(self):
        return self.location

    def get_history(self):
        return self.__trip_histroy

    def request_trip(self, destination):
        self.destination = destination

    def start_a_trip(self, fare, info):
        print(f"A trip started for {self.name}")
        self.balance -= fare
        self.__trip_histroy.append(info)


class Driver(User):
    def __init__(self, name, email, password, location, license) -> None:
        super().__init__(name, email, password)
        self.location = location
        self.license = license
        self.earning = 0
        self.vaild_driver = license_authority.validate_license(email, license)
        self.__trip_histroy = []
        self.vehicle = None

    def start_a_trip(self, start, destination, fare, info):
        self.earning += fare
        self.location = destination
        # trip_thread = threading.Thread(
        #     target=self.vehicle.start_driving, args=(start, destination)
        # )
        self.vehicle.start_driving(start, destination)
        # trip_thread.start()
        self.__trip_histroy.append(info)

    def take_driving_test(self):
        result = license_authority.take_driving_test(self.email)
        if result == False:
            # print("Sorry you failed, try again")
            self.license = None
            pass
        else:
            self.license = result
            self.vaild_driver = True

    def get_history(self):
        return self.__trip_histroy

    def register__vehicle(self, vehicle_type, license_plate, rate):
        if self.vaild_driver is True:
            new_vehicle = None
            if vehicle_type == "car":
                new_vehicle = Car(vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, new_vehicle)
            elif vehicle_type == "bike":
                new_vehicle = Bike(vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, new_vehicle)
            else:
                new_vehicle = Cng(vehicle_type, license_plate, rate, self)
                uber.add_a_vehicle(vehicle_type, new_vehicle)
            self.vehicle = new_vehicle
        else:
            # print("You are not valid driver")
            pass


from random import randint

if __name__ == "__main__":

    rider1 = Rider("rider1", "rider1@gmail.com", "rider1", randint(0, 100), 1700)
    rider2 = Rider("rider2", "rider2@gmail.com", "rider2", randint(0, 100), 1000)
    rider3 = Rider("rider3", "rider3@gmail.com", "rider3", randint(0, 100), 800)

    for i in range(1, 100):
        driver1 = Driver(
            f"driver{i}",
            f"driver{i}@gmail.com",
            f"driver{i}",
            randint(0, 100),
            randint(10000, 500000),
        )
        driver1.take_driving_test()
        driver1.register__vehicle("car", randint(1220, 10200), 20)

    print(len(uber.get_available_cars()))

    uber.find_a_vehicle(rider1, "car", randint(0, 100))
    uber.find_a_vehicle(rider2, "car", randint(0, 100))
    uber.find_a_vehicle(rider3, "car", randint(0, 100))
    uber.find_a_vehicle(rider1, "car", randint(0, 100))
    uber.find_a_vehicle(rider2, "car", randint(0, 100))
    uber.find_a_vehicle(rider3, "car", randint(0, 100))
    uber.find_a_vehicle(rider1, "car", randint(0, 100))
    uber.find_a_vehicle(rider2, "car", randint(0, 100))
    uber.find_a_vehicle(rider1, "car", randint(0, 100))

    print()
    print(rider1.get_history())
    print(rider1.balance)
    print(uber.total_income())

    pass
