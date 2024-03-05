x = int(input())
times = 0
for i in range(x+1):
    num = i
    while num%5 == 0 and num != 0:
        times += 1
        num = num//5
print(times)