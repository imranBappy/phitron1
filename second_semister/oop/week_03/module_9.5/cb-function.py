# def function_in_funtion():
#     def increage(i):
#         print(i)
#     for _ in range(10):
#         increage(_)


# function_in_funtion()


def return_function():
    def hello():
        return "Hello"
    return hello


result = return_function()
print(result())
