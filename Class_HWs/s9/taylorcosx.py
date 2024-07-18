import matplotlib.pyplot as plt
import math

def get_x(minx, maxx, step):
    x_range = []
    current_x = minx
    while current_x <= maxx:
        x_range.append(current_x)
        current_x = current_x + step
    return x_range

def get_x2(range_x):
    range_y = []
    for x in range_x:
        x2 = x * x
        range_y.append(x2)
    return range_y

def get_cosx(range_x):
    range_y = []
    for x in range_x:
        range_y.append(math.cos(x))
    return range_y

def taylorcos(x, n):
    sum = 0
    sign = 1
    for i in range(n):
        w = 2 * i
        sum = sum + sign * (x ** w)/ factorial(w)
        sign = sign * -1
    return sum

def factorial(n):
    product = 1 
    for i in range(1,n+1):
        product = product * i
    return product
    

def get_taylorcosx(range_x, n):
    range_y = []
    for x in range_x:
        range_y.append(taylorcos(x, n))
    return range_y

if __name__ == '__main__':
x = get_x(-3.14, 3.14, 0.1)
y_cos  = get_cosx(x)
plt.plot(x, y_cos)
plt.show() 
        