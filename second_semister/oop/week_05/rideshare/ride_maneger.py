class RideManager:
    def __init__(self) -> None:
        print("Ride manager acctived!")
        self.__available_cars = []
        self.__available_bikes = []
        self.__available_cngs = []
        self.__income = 0
        self.__trip_history = []

    def add_a_vehicle(self, vehicle_type, vehicle):
        if vehicle_type == "car":
            self.__available_cars.append(vehicle)
        elif vehicle_type == "bike":
            self.__available_cars.append(vehicle)
        else:
            self.__available_cars.append(vehicle)

    def get_available_cars(self):
        return self.__available_cars

    def total_income(self):
        return self.__income

    def trip_histroy(self):
        return self.__trip_history

    def find_a_vehicle(self, rider, vehicle_type, destination) -> None:
        if vehicle_type == "car":
            if len(self.__available_cars) == 0:
                # print("Sorry Not Available")
                return False
            for car in self.__available_cars:
                if abs(rider.location - car.driver.location) < 10:
                    distance = abs(rider.location - destination)
                    fare = distance * car.rate
                    if fare > rider.balance:
                        print(
                            f"{rider.name} To kase besi taka nai : ",
                            fare,
                            rider.balance,
                        )
                        return False
                    if car.status == "available":
                        trip_info = f"Match for '{rider.name}' for fare '{fare}' with '{car.driver.name}' stated '{rider.location}' to '{destination}'"
                        rider.start_a_trip(fare, trip_info)
                        car.status = "unavailable"
                        car.driver.start_a_trip(rider.location,destination, fare * 0.8, trip_info)
                        self.__income += fare * 0.20
                        # print("postentia", rider.location, car.owner)
                        self.__available_cars.remove(car)
                        print(trip_info)
                        self.__trip_history.append(trip_info)
                        return True


uber = RideManager()
