week = ["Saturday", "SunDay", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"]
values = []
for i in range(7):
    try:
        v = int(input(f"{week[i]}: "))
        values.append(v)
    except:
        print("Please Enter integer value!")
        exit()


sum = 0
for s in values:
    sum += s


mean = sum / 7
print("mean value: ", mean)

s = []
for div in values:
    val = div - mean
    s.append(val**2)

s = 0
for i in s:
    s += i
deviation = (s / 6) ** 0.5
print("Deviation value: ", deviation)
