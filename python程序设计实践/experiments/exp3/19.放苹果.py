def place(x: int, y: int) -> int:
    if x<y:
        return place(x, x)
    if x==0 or y==1:
        return 1
    if x<0 or y<=0:
        return 0
    return place(x-y, y) + place(x, y-1)


T = int(input())
for _ in range(T):
    m, n = map(int, input().split())
    print(place(m, n))
