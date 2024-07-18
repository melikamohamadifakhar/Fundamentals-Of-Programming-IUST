import math
def quardical(a, b, c):
    delta = (b*b) - (4*a*c)
    if delta>=0:
        x1 = ((-1 * b) + math.sqrt(delta))/(2*a)
        x2 = ((-1 * b) - math.sqrt(delta))/(2*a)
        print(x1)
        print(x2)
    else:
        print("The equation has no real roots.")
quardical(1, 3, -10)