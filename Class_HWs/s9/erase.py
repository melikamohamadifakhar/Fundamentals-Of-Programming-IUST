import matplotlib.pyplot as plt
import math

def taylorcos(x, n):
    sum = 0
    sign = 1
    for i in range(n):
        w = 2 * i
        sum = sum + sign * (x ** w)/ factorial(w)
        sign = sign * -1
    return sum

def get_taylorcosx(range_x, n):
    range_y = []
    for x in range_x:
        range_y.append(taylorcos(x, n))
    return range_y


x = get_x(-3.14, 3.14, 0.1)
y_cos  = get_cosx(x)
plt.plot(x, y_cos)
plt.show() 