class Demo:
    def __check(self):
        return " Demo's check "
    def display(self):
        print(self.__check(),end="")
class Demo_Derived(Demo):
    def __check(self):
        return " Derived's check "
Demo().display()
Demo_Derived().display()