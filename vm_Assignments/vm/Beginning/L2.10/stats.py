def make_list():
    x = []
    a = 1
    while a != -1:
        a = int(input("enter number:"))
        if a != -1:
            x.append(a)
    return x

def av(x):
    sum = 0
    for i in x:
        sum = sum + i
    num = len(x)
    avr = sum/num
    return avr

def find_min(x):
    min = x[0]
    for i in x:
        if i < min:
            min = i
    return min

def find_max(x):
    max = x[0]
    for i in x:
        if i > max:
            max = i
    return max

x = make_list()
print(len(x))
print(av(x))
print(find_min(x))
print(find_max(x))