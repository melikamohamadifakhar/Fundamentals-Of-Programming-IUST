def print_left_triangle(base):
    for i in range(1, base+1):
        if i % 2 == 0:
            x = i * ("*")
            print(x)
        else:
            x = i * ("%")
            print(x)

print_left_triangle(10)