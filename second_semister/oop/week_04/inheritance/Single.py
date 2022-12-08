class Base:
    def __init__(self):
        print("Base class callled")
        self.name = "Base class"


class Child(Base):
    def __init__(self):
        # print("Called child class")
        super().__init__()
        pass


c = Child()
