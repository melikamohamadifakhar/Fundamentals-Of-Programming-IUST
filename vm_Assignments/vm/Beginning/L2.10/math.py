import math
def factorial(n):
    if n == 0:
        return 1
    else:
        for i in range(1, n):
            n = n * i
        return n

def power(x, y):
    if y == 0:
        return 1
    else:
        m = x
        for i in range(y-1):
            x = x * m
        return x
# power(1, 1)
def eulers_constant(precision):
    n = 0
    current = 0
    nextt = precision + 1
    while nextt > precision:
        nextt = 1/(factorial(n))
        if nextt > precision:
            current = current + (1/factorial(n))
            n = n + 1
    return current
# print(eulers_constant(.1))
def exp(x, precision):
    n = 0
    current = 0
    nextt = precision + 1
    while nextt > precision:
        p = power(x, n)
        nextt = p / (factorial(n))
        if nextt > precision:
            current = current + nextt
            n = n + 1
    return current
# print(exp(1, .01))

def abs(x):
    if x >= 0:
        return x
    else:
        x = -1 * x
        return x
def near(x, y, closeness=.001):
    difference = x - y
    d = abs(difference)
    if d > closeness:
        return False
    else:
        return True
# print(near(exp(3, .0001), exp2(3, .0001), closeness=.0001))
def exp2(x, precision):
    m = 1
    current = 0
    nextt = 1
    while nextt > precision:
            current = current + nextt
            nextt = nextt*x/m 
            m = m + 1
    return current
print(exp2(1, .01))
# print(near(exp(1, .01), exp2(1, .01)), .01)
# a = exp2(1, .0001)
# b = exp(1, .0001)
# assert a == b
def taylorsin(x, precision):
    x = x*(math.pi)/180
    sign = 1
    n = 1
    nextt = 1
    current = 0
    while abs(nextt) > precision:
        p = power(x, n)
        nextt = sign *(p / (factorial(n)))
        if abs(nextt) > .0000001:
            current = current + nextt
            n = n + 2
            sign = sign * -1
    return current
# print(taylorsin(30, .001))
def square_root(x, precision):
    lower = 0
    upper = x
    while (upper-lower) > precision:
        mid = (lower+upper)/2
        m2 = mid*mid 
        if m2 == x:
            return mid
        if m2 < x:
            lower = mid
        if m2 > x:
            upper = mid
    return mid
# print(square_root(64, .0000000000000001))
def root(x, n, precision):
    lower = 0
    upper = x
    while (upper-lower) > precision:
        mid = (lower+upper)/2
        m2 = power(mid, n)
        if m2 == x:
            return mid
        if m2 < x:
            lower = mid
        if m2 > x:
            upper = mid
    return mid
# print(root(27, 3, .0001))


def ln(x, precision):
    e = eulers_constant(precision)
    upper = x
    lower = 0
    while (upper-lower) > precision:
        mid = (lower+upper)/2
        if e**mid == x:
            return mid
        if e**mid>x:
            upper = mid
        if e**mid<x:
            lower = mid
    return mid
# print(ln(1, .000001))