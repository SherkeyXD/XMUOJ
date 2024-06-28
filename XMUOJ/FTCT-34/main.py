from itertools import groupby
from functools import reduce

MOD, f, g = 1000000007, [1, 1, 2, 4, 7], [1, 1, 2, 4, 8]
for _ in range(5, 100001):
    f.append((f[-1] + f[-1] - f[-4]) % MOD)
    g.append((g[-1] + g[-1] - g[-5]) % MOD)

pressedKeys = input()
res = reduce(lambda r, t: r * [f, g][t[0] in '79'][len([*t[1]])] % MOD, groupby(pressedKeys), 1)
print(res)