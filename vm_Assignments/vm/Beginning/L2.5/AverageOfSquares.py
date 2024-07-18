def average_of_squares0(n):
    sum = 0
    for i in range(n):
        sum = sum + (i*i)
    av = sum/(n-1)
    print(av)

def average_of_squares1(n):
    sum = 0
    for i in range(n+1):
        sum = sum + (i*i)
    av = sum/(n)
    print(av)

average_of_squares1(4)
average_of_squares0(5)