def q1_get_max(a,b,c):
    if a>b and a>c:
        return a
    if b>a and b>c:
        return b
    if c>b and c>a:
        return c

def q2_is_right_angled(a, b, c):
    if ((pow(a,2) + pow(b,2) == pow(c,2)) or (pow(a,2) + pow(c,2) == pow(b,2)) or (pow(b,2) + pow(c,2) == pow(a,2))):
        return True
    else:
        return False

def q3_array_fsum(a, b, c):
    sum =0
    for i in range (len(a)):
        sum += ((a[i] * b[i]) + c[i])
    return sum

def q4_string_shuffle(str1):
    l = len(str1)
    for i in range(l):
        if i%2==0:
            temp = str1[i]
            str1[i] = str1[i+1]
            str1[i+1] = temp



def q6_sort(a, b, c, d):
    lis = [a, b, c, d]
    max =0
    max1=0
    max2=0
    max3=0
    for i in range(4):
        if lis[i]>max:
            max = lis[i]
        a = max
    for i in range(1,4):
        if lis[i]>max1:
            max1 = lis[i]
        b = max1
    for i in range(2,4):
        if lis[i]>max2:
            max2 = lis[i]
        c = max2
    for i in range(3,4):
        if lis[i]>max3:
            max3 = lis[i]
        d = max3

