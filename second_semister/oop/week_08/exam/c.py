def add_half_adder(x, y):
    return x ^ y


def carry_half_adder(x, y):
    return x & y


x = int(input("Enter 1 or 0: "))
y = int(input("Enter 1 or 0: "))
try:

    if (x == 1 or x == 0) and (y == 1 or y == 0):
        sum = add_half_adder(x, y)
        carry = carry_half_adder(x, y)
        print("Sum: ", sum)
        print("Carry: ", carry)
    else:
        print("Enter 0 or 1!")
except:
    print("Give input again!")


def test_half_adder():
    sum = True
    carry = False
    assert sum == add_half_adder(1, 0), "fail"
    assert carry == carry_half_adder(1, 0), "fail"


test_half_adder()
