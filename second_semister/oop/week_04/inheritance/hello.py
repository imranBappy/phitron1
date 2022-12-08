class Hello():
    x = 10

    def __init__(self):
        Hello.h = 1999
        self.__name = "IMran"

    def __repr__(self):
        return f"name : {self.x}"

    def say_hello(self, xx):
        print("Hello bbs", xx)


class WoW(Hello):
    def __init__(self):
        # super().say_hello()
        # Hello.__init__(self)
        # print(self._Hello__name)
        # print(self.say_hello())
        pass

    def say_hello(self):
        print("Hello ")


# h = Hello()
# print(h)
# print(Hello.h)
x = WoW()

# x.say_hello("fan")
