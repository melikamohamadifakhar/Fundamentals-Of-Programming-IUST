import turtle
import random
import math

def set_random_color():
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    turtle.pencolor(r, g, b)


# turtle.pensize(3)
# turtle.speed(0)
# turtle.colormode(255)
# l = 200
# for i in range(10):
#     set_random_color(turtle)
#     for n in range(4):
#         turtle.forward(l)
#         turtle.right(90)
#         l = l - 5
# turtle.mainloop()

def init():
    alex = turtle.Turtle()
    turtle.colormode(255)
    alex.pensize(2)
    alex.speed(0)
    return alex

def draw_squares(size, step):
    tu = init()
    tu.penup()
    tu.setpos(-1 * size/2,-1 * size/2)
    tu.seth(90)
    tu.pendown()

    side_len = size
    for i in range(int(size/step)):
        tu.forward(side_len)
        tu.right(90)
        side_len = side_len - step
        set_random_color(tu)
    turtle.mainloop()
# draw_squares(200, 10)


# r = 250
# turtle.penup()
# turtle.setpos(250, 0)
# turtle.pendown()
#     for d in range(0,360*5,5):
#         set_random_color(turtle)
#         x = r * math.cos(d * math.pi/180)
#         y = r * math.sin(d * math.pi/180)
#         turtle.setpos(x, y)
#         r = r*.99
t = turtle.Turtle()
def set_random_color():
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    t.pencolor(r, g, b)


def draw_circle(t, r):
    t.penup()
    for theta in range(0, 360*10, 5):
        x = r * math.cos(theta * math.pi/180)
        y = r * math.sin(theta * math.pi/180)
        r = r *0.99
        t.setpos(x, y)
        t.pendown()

# draw_circle(t, 100)


# turtle.pensize(3)
# turtle.speed(0)
# turtle.colormode(255)
# turtle.penup()
# turtle.setpos(-200, 100)
# turtle.pendown()
# l = 400
# for h in range(13):
#     set_random_color(turtle)
#     for n in range(3):
#         turtle.forward(l)
#         turtle.right(120)
#         l = l - 10
# turtle.mainloop()

