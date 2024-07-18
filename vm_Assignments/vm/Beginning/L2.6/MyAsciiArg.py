def print_cone(n):
    if n % 2 != 0:
        center = ((n+1)/2)
        print(" "*int((center)) + "^")
        for i in range(1, int(center)):
            x = int(center - i)
            print(" "*x + "/"*i + "|" + "\\"*i)
# part 4 :
for i in range(10):
    print_cone(i)