import pyjokes


def tell_some_jokes():
    while 1:
        reply = input("Do you want to hear jok ? 1/0 ")
        if (reply == "1"):
            print(pyjokes.get_joke())
        else:
            return None


tell_some_jokes()
