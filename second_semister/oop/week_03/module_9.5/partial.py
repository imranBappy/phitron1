from functools import partial
def get_num(a, b, c, d):
    return a * 1000 + b * 100 + c * 10 + d



fourth_only = partial(get_num, d = 0, b = 0, c =0)

print(fourth_only(4))