n, m = map(int, input().split())
parent = list(range(n+1))

def find(x):
    if parent[x] != x:
        parent[x] = find(parent[x])
    return parent[x]

def union(x, y):
    parent[find(x)] = find(y)

for _ in range(m):
    inputs = input().split()
    if inputs[0] == "M":
        union(int(inputs[1]), int(inputs[2]))
    elif inputs[0] == "Q":
        if find(int(inputs[1])) == find(int(inputs[2])):
            print("Yes")
        else:
            print("No")