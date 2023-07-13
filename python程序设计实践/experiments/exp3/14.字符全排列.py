import itertools as it

a = list(input())
a.sort()
res = it.permutations(a)
for i in res:
    print("".join(map(str, i)))