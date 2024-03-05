words = input().split()
reverse = [word[::-1] for word in words]
print(' '.join(reverse))