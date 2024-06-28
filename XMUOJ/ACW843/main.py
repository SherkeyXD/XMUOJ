def check(col, res, row):
    for i in range(row):
        if res[i] == col or res[i] + i == row + col or res[i] - i == col - row:
            return False
    return True


def dfs(num, res, row):
    if row == num:
        for i in range(row):
            for j in range(num):
                if res[i] == j:
                    print("Q", end='')
                else:
                    print(".", end='')
            print()
        print()
        return
    for col in range(num):
        if check(col, res, row):
            res[row] = col
            dfs(num, res, row + 1)
            res[row] = 0


n = int(input())
dfs(n, [0 for _ in range(n)], 0)
