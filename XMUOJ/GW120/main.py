def move(n:int, a: str, b: str):
    print(n, ":", a, "->", b, sep="")


def hanoi(n: int, a: str, b: str, c: str):
    if n == 1:
        move(1, a, c)
    else:
        hanoi(n - 1, a, c, b)
        move(n, a, c)
        hanoi(n - 1, b, a, c)


n, a, b, c = input().split()
hanoi(int(n), a, b, c)