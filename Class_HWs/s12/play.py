import turtle
import random
import math
t = turtle.Turtle()


def draw_square(t, l):
    t.forward(l)
    t.right(90)
    t.forward(l)
    t.right(90)
    t.forward(l)
    t.right(90)
    t.forward(l)
# draw_square(t, 50)
# turtle.mainloop()


def draw_square2(t, l):
    for i in range(4):
        t.forward(l)
        t.right(90)
        
# draw_square2(t, 60)
# turtle.mainloop()


def draw_polygon(t, l, n):
    angle = 360 / n
    for i in range(n):
        t.forward(l)
        t.right(angle)
# draw_polygon(t, 50, 12)
# turtle.mainloop()

# draw_square(t, 50)
# t.penup()
# t.setpos(50, 50)
# t.pendown()
# draw_polygon(t, 20, 6)
# t.circle(40)


# t.speed(0)
# t.penup()
# t.setpos(0, -100)
# t.pendown()
# t.pencolor("red")
# t.pensize(10)
# draw_square(t, 40)
# turtle.mainloop()


# turtle.colormode(255)
# for radius in range(10, 200, 20):
#     t.penup()
#     t.setpos(0, -1 * radius)
#     t.pendown()
#     t.circle(radius)


# radius = 10
# step = 20
# for i in range(5):
#     t.circle(radius)
#     radius = radius + step

# for radius in range(10, 200, 20):
#     t.seth(0)
#     t.circle(radius)
#     t.seth(-90)
#     t.penup()
#     t.forward(20)
#     t.pendown()

def set_random_color(t):
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    t.pencolor(r, g, b)

# turtle.colormode(255)
# for radius in range(10, 200, 20):
#     set_random_color(t)
#     t.seth(0)
#     t.circle(radius)
#     t.seth(-90)
#     t.penup()
#     t.forward(20)
#     t.pendown()


def circle_clock(t):
    r = 20
    for i in range(12):
        t.forward(100)
        t.circle(r)
        t.backward(100)
        t.right(30)
circle_clock(t)

def circle_clock2(t):
    l = 150
    r = 25
    t.penup()
    for tetha in range(0, 360, 30):
        x = l * math.cos(tetha * math.pi / 180)
        y = l * math.sin(tetha * math.pi / 180)
        t.setpos(x, y)
        t.pendown()
        t.circle(r)
        t.penup()
circle_clock2(t)

  

def throw_banana(tu):
    x0 = -200
    y0 = -200
    v0 = 15
    theta = 45
    v0x = v0 * math.cos(theta * math.pi/180)
    v0y = v0 * math.sin(theta * math.pi/180)
    t = 0
    for i in range(1000):
        tu.setpos(x, y)
        t = t + 0.01
        x = t * Vx + x0
        y = -9.8 * 0.5 * (t ** 2) + Vy0 * t + y0
throw_banana(tu)
turtle.mainloop()