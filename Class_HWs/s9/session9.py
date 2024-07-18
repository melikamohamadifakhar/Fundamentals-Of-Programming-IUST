import matplotlib.pyplot as plt
import math
def get_x(minx, maxx, step):
    x_range = []
    current_x = minx
    while current_x <= maxx:
        x_range.append(current_x)
        current_x = current_x + step
    return x_range


# x_list = [3, 5]
# for i in range(5):
#     x_list.append(i ** 2)
# print(x_list)

def get_x2(range_x):
    range_y = []
    for x in range_x:
        x2 = x * x
        range_y.append(x2)
    return range_y
if __name__ == "__main__":
    x = get_x(-5, 5, 0.1)
    y = get_x2(x)
    plt.plot(x, y)
    plt.show()
