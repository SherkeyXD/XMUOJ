def exp(a: list) -> float:
    op = a.pop(0)
    if op == '+':
        return exp(a) + exp(a)
    elif op == '-':
        return exp(a) - exp(a)
    elif op == '*':
        return exp(a) * exp(a)
    elif op == '/':
        return exp(a) / exp(a)
    else:
        return float(op)
    

a = input().split()
print("{:.6f}".format(exp(a)))