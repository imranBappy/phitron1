import time


class School:
    def __init__(self, name, address, principal=""):
        self.name = name
        self.address = address
        self.principal = principal
        self.grades = []
        School._grades = []

    def add_grad(self, name, teacher):
        newGrad = Grade(name, teacher)
        # print(newGrad)
        self.grades.append(newGrad)
        School._grades.append(newGrad)

    def remove_grad(self, name):
        inx = 0
        for i, grad in enumerate(self.grades):
            if grad.name == name:
                inx = i
                break
        del self.grades[inx]


class Grade:
    def __init__(self, name, teacher):
        self.teacher = teacher
        self.name = name
        self.students = []

    def __repr__(self):
        return f"Class : {self.name}, Teacher : {self.teacher}"

    def __del__(self):
        print(F"Delete callde. {self.name}")


mist = School("MIST", "khulna")
mist.add_grad("6", "Momen")
mist.add_grad("1", "Akash")
mist.add_grad("3", "Saiful")


print(mist.grades)

mist.remove_grad("3")
# del mist.grades[0]
print(mist.grades)

time.sleep(5)

# semister6 = Grade("1", "Akash")
# print(semister6)


# print(mist.grades[0])
