ans = []

def check(col, res, row):
    for i in range(row):
        if res[i] == col or res[i] + i == row + col or res[i] - i == col - row:
            return False
    return True


def dfs(num, res, row):
    if row == num:
        ans.append([i+1 for i in res])
        return 
    for col in range(num):
        if check(col, res, row):
            res[row] = col
            dfs(num, res, row + 1)
            res[row] = 0


dfs(8, [0 for _ in range(8)], 0)
T = int(input())
for _ in range(T):
    n = int(input())
    print("".join(map(str, ans[n-1])))