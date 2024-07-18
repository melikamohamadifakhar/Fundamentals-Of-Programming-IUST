def factorial(n):
    product = 1 
    for i in range(1,n+1):
        product = product * i
    return product

def power(x, y):
    v = 1
    for i in range(y):
        v = v * x
    return v
