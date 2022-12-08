s = "I am global"


# def f():
#     global s
#     s = "I am local"
#     print(s)

# f()
# print(s)


def outer_scope():
    
    s = "I am outer"

    def inner_scope():
        # s = "I am innter scope"
        def dd():
            # s = "dsadas"
            print(s)
        dd()
        print(s)
    print(s)
    
    return inner_scope
outer_scope()()
print(s)

