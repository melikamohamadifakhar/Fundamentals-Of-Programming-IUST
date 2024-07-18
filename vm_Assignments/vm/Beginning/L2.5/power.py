def power(x, y):
    if y == 0:
        return 1
    else:
        m = x
        for i in range(y-1):
            x = x * m
        return x
print(power(3, 4)) 