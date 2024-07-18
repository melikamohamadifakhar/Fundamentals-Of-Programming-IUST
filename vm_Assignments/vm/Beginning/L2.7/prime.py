import math
def is_divisible(a, b):
    if a % b == 0:
        return True
    return False


def is_prime(number):
    assert number > 1
    for i in range(2, number):
        if is_divisible(number, i):
            break
    else:
        print(number)

for number in range(2,100):
    is_prime(number)