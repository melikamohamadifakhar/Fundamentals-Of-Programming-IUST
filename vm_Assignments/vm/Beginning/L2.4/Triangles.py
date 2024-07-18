import math
def print_left_triangle(char, base):
    for i in range(1, base+1):
        x = i * char
        print(x)

def print_right_triangle(char, base):
    for i in range(1, base+1):
        x = i * char
        y = " " * (base-i)
        print(y + x)

print_left_triangle("*", 3)
print_right_triangle("*", 5)