class Singleton:
    __instance = None;
    def __init__(self) -> None:
        if  Singleton.__instance is None:
            Singleton.__instance = self;
        else:
            raise Exception("Already have an instance")
    
    @staticmethod
    def get_instace():
        if Singleton.__instance is None:
            Singleton()
        return Singleton.__instance;
    
a = Singleton()
print(a)
print(Singleton.get_instace())
