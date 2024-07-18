def q1_add(a, b):
    c = a + b
    return c

def q2_print_add(a, b):
    c = a + b
    print(c)

def q3_print_square(char, n):
    print(char*n)
    for i in range(n-2):
        print(char, " "*(n-4), char)
    print(char*n)


def q4_sum_odd_squares(a, b):
    sum = 0
    for i in range(a, b+1):
        if i % 2 != 0:
            s = i*i
            sum = sum + s
    return sum

def q5_sum_value_squares(l):
    sum = 0
    for i in l:
        s = i*i
        sum = sum + s
    return sum

def q6_sum_num_indices(nums, indices):
    sum = 0
    for i in range(len(nums)):
        if i in indices:
            sum = sum + nums[i]
    return sum


def q7_get_new_fib_array(x1, x2, n):
    li=[]
    li.append(x1)
    li.append(x2)
    for i in range(n-2):
        x3 = (x1 * x2)-2
        li.append(x3)
        x1 = x2
        x2 = x3
    return li
