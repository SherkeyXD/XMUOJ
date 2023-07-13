n = [2**i for i in range(0, 16)]

def solve(a: int):
    if a == 0:
        print("0", end='')
        return
    for i in range(15, -1, -1):
        if a >= n[i]:
            print("2", end='')
            if i != 1:
                print("(", end='')
                solve(i)
                print(")", end='')
            a -= n[i]
            if a:
                print("+", end='')


a = int(input())
solve(a)
