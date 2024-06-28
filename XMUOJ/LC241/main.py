def calculate(formula) -> list[int]:
    if formula.isdigit():
        return [int(formula)]
    stack = []
    for i, char in enumerate(formula):
        if char in ["+", "-", "*"]:
            left = calculate(formula[:i])
            right = calculate(formula[i + 1 :])
            for l in left:
                for r in right:
                    if char == "+":
                        stack.append(l + r)
                    elif char == "-":
                        stack.append(l - r)
                    elif char == "*":
                        stack.append(l * r)
    return stack


formula = input()
print("\n".join(list(map(str, sorted(calculate(formula))))))
