stairs = [1, 1, 2]
for i in range(3, 47):
    stairs.append(stairs[i - 1] + stairs[i - 2])

n = int(input())
print(stairs[n])