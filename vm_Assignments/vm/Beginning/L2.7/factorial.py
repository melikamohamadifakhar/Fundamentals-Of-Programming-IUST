def factorial(n):
    for i in range(1, n):
        n = n * i
    return n

for n in range(1, 21):
    print(n, factorial(n))