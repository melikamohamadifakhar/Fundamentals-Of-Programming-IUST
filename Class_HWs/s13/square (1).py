import turtle
import random

def set_random_color(tu):
    r = random.randint(0,255)
    g = random.randint(0,255)
    b = random.randint(0,255)
    tu.pencolor(r, g, b)

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

draw_squares(400, 10)


