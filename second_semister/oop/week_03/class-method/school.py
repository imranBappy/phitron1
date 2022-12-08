class Student:
    def __init__(self, name, age, id):
        self.name = name
        self.age = age
        self.id = id


class Course:
    def __init__(self, name, teacher):
        self.name = name
        self.teacher = teacher


class Schools:
    def __init__(self, name, teachers, courses, students):
        self.name = name
        self.teachers = teachers
        self.courses = courses
        self.students = students

    def get_std(self):
        for s in self.students:
            print(s.name)


students = [Student("Imran", 21, 1), Student(
    "Rakib", 21, 1), Student("Hemel", 21, 1)]

courses = [Course("DS-Phitron", "Jhanker Mahabub"),
           Course("Programming in C", "Pitron kundo"), Course("Algo", "Imran Hosse")]

s = Schools("Phitron", ["Jhanker Mahabub",
            "Pitron kundo", "Imran Hoosen"], courses, students)

s.get_std()
