"""
1, Instance method
2, Static method
3, Class method
4, Abstract mathod
"""

""" 
Class variable or static variable are same
Class method acssess only class 
Static method can not access class class or instance
"""


class School:
    school_name = "Udayan High School"  # class variable

    def __init__(self, name) -> None:
        print(self)
        self.name = name

    def change_s_name(self, name):
        School.school_name = name

    @classmethod
    def get_name(cls):
        return School.school_name

    @classmethod
    def change_name(cls, name):
        print(cls)
        cls.school_name = name

    @staticmethod
    def greed():
        print("Hello")


udayan = School("Phitron")
udayan1 = School("Phitron")


# print(udayan.name)
# udayan.change_s_name("Imran")
# print(School.school_name)
# name = udayan.get_name()
udayan.change_name("Imran")
# print(udayan.school_name)
# print(udayan1.school_name)
School.greed()
