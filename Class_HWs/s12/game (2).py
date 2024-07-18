import turtle
import random
import math
alex = turtle.Turtle()


def draw_polygon(alex, l, n):
    angle = 360 / n
    for i in range(n):
        alex.forward(l)
        alex.right(angle)

x0 = -300
y0 = -100
alex.hideturtle()
alex.pensize(5)
alex.pencolor("red")
alex.penup()
alex.setpos(x0, y0)
alex.pendown()
alex.circle(10)
alex.penup()
alex.setpos(-310, -120)
alex.pendown()
alex.write("YOU")
alex.penup()
alex.pencolor("green")
alex.setpos(300, -80)
alex.pendown()
draw_polygon(alex, 12, 6)
alex.penup()
alex.setpos(290, -120)
alex.pendown()
alex.write("TARGET")
alex.penup()

alex.pencolor("black")
alex.pensize(2)
v0 = int(input("enter your v0:"))
theta = int(input("enter your theta:"))
def throw_banana1(tu):
    x0 = -300
    y0 = -100

    vx = v0 * math.cos(theta * math.pi / 180)
    vy = v0 * math.sin(theta * math.pi / 180)
    tu.penup()
    tu.setpos(x0, y0)
    tu.pendown()

    z = 0

    for i in range(10000):
        x = vx * z + x0
        y = 0.5 * -9.8 * (z**2) + vy * z + y0
        if y>=-100:
            tu.setpos(x, y)
            if 295<x<305  and -100<y<-99 :
                tu.pensize(20)
               
                tu.pencolor("blue")
                tu.penup()
                tu.setpos(-80, 150)
                tu.pendown()
                
                tu.write("YOU WON!", font=("Arial", 20, "normal"))
                tu.penup()
        z = z + 0.1
throw_banana1(alex)
turtle.mainloop()

    
