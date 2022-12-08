week = ["Saturday", "SunDay", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"]
values = []
for i in range(7):
    try:
        v = int(input(f"{week[i]}: "))
        values.append(v)
    except:
        print("Please Enter integer value!")
        exit()

min_ = values[0]
max_ = values[0]
for v in values:
    if min_ > v:
        min_ = v

for v in values:
    if max_ < v:
        max_ = v
print("Minimum rainfall: ", min_)
print("Maximum rainfall: ", max_)
