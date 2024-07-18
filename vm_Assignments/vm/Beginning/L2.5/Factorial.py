def factorial(n):
    assert n >= 0
    for i in range(1, n):
        n = n * i
    assert n >= 0
    return n

for n in range(1, 21):
    print(n, factorial(n))

