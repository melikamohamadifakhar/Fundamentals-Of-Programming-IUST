def swap(nums, x, y):
    temp = nums[x]
    nums[x] = nums[y]
    nums[y] = temp


def reverse(numbers):
    t=len(numbers)
    for i in range(t//2):
        swap(numbers, i, t-i-1)
    return numbers


def reverse2(mylist):
    list=[]
    t = len(mylist)
    for i in range(t):
        list.append(mylist[t-i-1])
    return list

def sort(numbers):
    for i in range(len(numbers)):
        max_pose = find_max(numbers, i, len(numbers)-1)
        swap(numbers, i, max_pose)
    return numbers

def find_max(list, from_pose, to_pose):
    max_pose = from_pose
    for i in range(from_pose+1, to_pose+1):
        if list[i] > list[max_pose] :
            max_pose = i
    return max_pose

print(find_max([3, 7, 5, 34, 90], 1, 2))



def is_prime(x):
    for n in range(2,x):
        if x % n == 0 :
            return False
    return True
        


def find_prime_factors(x):
    prime_factors =[]
    for n in range(2,x):
        if is_prime(n):
            if x % n ==0:
                prime_factors.append(n)
    return sort(prime_factors)

