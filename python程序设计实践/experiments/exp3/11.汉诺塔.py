def move(a: str, b: str):
    print(a, "->", b, sep="")


def hanoi(n: int, a: str, b: str, c: str):
    if n == 1:
        move(a, c)
    else:
        hanoi(n - 1, a, c, b)
        move(a, c)
        hanoi(n - 1, b, a, c)


n = int(input())
hanoi(n, "A", "B", "C")