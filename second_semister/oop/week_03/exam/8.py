numbers = [10, 20, 10, 40, 50, 60, 70]
target = 50
for i in range(len(numbers)-1):
    if numbers[i] + numbers[i+1] == target:
        print(i, i+1)
        break
