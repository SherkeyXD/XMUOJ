input()
input()
line1 = input().strip()
line2 = input().strip()
line3 = input().strip()
input()
input()


def for_loop(string) -> list:
    name = string.split()[0].strip()
    if "step" in string:
        step = int(string.split("step")[-1].strip())
    else:
        step = 1
    if "downTo" in string:
        start = int(string.split("downTo")[0].split()[-1].strip())
        end = int(string.split("downTo")[-1].split()[0].strip())
        step = -step
    else:
        start = int(string.split("..")[0].split()[-1].strip())
        end = int(string.split("..")[-1].split()[0].strip())
    return [name, start, end, step]


def get_range(loop: list) -> list:
    if loop[1] == loop[2]:
        return [loop[1]]
    if loop[2] > 0:
        loop_range = range(loop[1], loop[2] + 1, loop[3])
    elif loop[2] < 0:
        loop_range = range(loop[1], loop[2] - 1, loop[3])
    else:
        if loop[1] > 0:
            loop_range = range(loop[1], loop[2] - 1, loop[3])
        else:
            loop_range = range(loop[1], loop[2] + 1, loop[3])
    return loop_range


def get_sum(loop : list) -> int:
    length = len(loop)
    return (loop[0] + loop[-1]) * length // 2


outer = for_loop(line1.split("(")[-1].split(")")[0].strip())
inner = for_loop(line2.split("(")[-1].split(")")[0].strip())
add = line3.split("+=")[-1].strip()

res = 0
outer_range = get_range(outer)
inner_range = get_range(inner)

if outer[0] == add:
    res += get_sum(outer_range) * len(inner_range)
else:
    res += get_sum(inner_range) * len(outer_range)
print(res)
