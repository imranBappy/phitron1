import random


class Brta:
    def __init__(self) -> None:
        self.__license = {}

    def take_driving_test(self, email):
        scre = random.randint(0, 100)
        if scre >= 33:
            license_number = random.randint(5000, 9999)
            self.__license[email] = license_number
            return license_number
        else:
            return False

    def validate_license(self, email, license):
        for key, value in self.__license.items():
            if key == email and value == license:
                return True
        return False
