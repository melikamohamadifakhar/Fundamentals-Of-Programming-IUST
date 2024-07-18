def fibonacci(n):
    x1, x2 = 1, 1
    print(x1)
    print(x2)
    for i in range(n-2):
        n = x1 + x2
        x1 = x2
        x2 = n
        print(n)

fibonacci(10)