# print("Hello World")
# print("hello again")
# print("done")

def print_n_times(str, n):
    for i in range(n):
        print(str, end="")
print_n_times("Hello", 5)
print_n_times("Hello", n=5)
print_n_times(" str="Hello", n=5 ")