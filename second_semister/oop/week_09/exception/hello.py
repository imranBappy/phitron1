def div(x):
    x = x / 2


try:
    div(10)
except Exception:
    print("Error : ")
else:
    print("Error not found")
finally:
    print("Final is ")
