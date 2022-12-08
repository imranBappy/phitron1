import random


class Student:
    def __init__(self):
        pass

    def __unique_id(self):
        return random.randint(1000, 10000)

    def add(self, name, mark, ):
        self.__write_data(
            {"student_name": name, "mark": mark, "student_id": self.__unique_id()})

    def __write_data(self, data):
        f = open("data.txt", "a")
        fr = open("data.txt", "r")
        if len(fr.read()) == 0:
            f.write(f"{data}")
        else:
            f.write(f", {data}")


s = Student()
s.add("Bappy", 99)
