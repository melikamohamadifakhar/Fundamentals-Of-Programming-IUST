import turtle
import time
import math
import random
SCREEN_HEIGHT=600
SCREEN_WIDTH=600
MARGIN=20
def screen():
    s = turtle.Screen()
    s.title("Arkanoid game")
    s.bgcolor("white")
    s.setup(width = SCREEN_WIDTH, height = SCREEN_HEIGHT)
    s.tracer(0)
    return s
def set_random_color(tu):
    r = random.randint(0,255)
    g = random.randint(0,255)
    b = random.randint(0,255)
    tu.pencolor(r, g, b)
def make_single_target(x, y):
    t = turtle.Turtle()
    set_random_color(t)
    t.penup()
    t.shape("square")
    t.shapesize(0.5,3,10)
    t.setpos(x, y)
    return t
targets=[]
def make_all_targets():
    xt = -262
    yt =[240, 210, 180, 150]
    for i in range(4):
        xt = -262
        for k in range(8):
            t= make_single_target(xt, yt[i])
            targets.append(t)
            xt = xt + 73
def make_paddle():
    t = turtle.Turtle()
    t.speed(0)
    t.shape("square")
    t.shapesize(0.5,3,10)
    t.color("blue")
    t.penup()
    t.setpos(0, -250)
    t.direction = "stop"
    return t
def move_paddle(h):
    x,y = h.position()
    h.speed(3)
    if h.direction == "right":
        h.setpos(x + 30, y)
    if h.direction == "left":
        h.setpos(x - 30, y) 
    if h.direction == "stay":
        h.speed(0)
def go_right():
    pdl.direction = "right"
def go_left():
    pdl.direction = "left"
def stay():
    pdl.direction = "stay"
def border():
    x,y = pdl.position()
    if x > 250 or x < -250 :
        pdl.direction = "stop"
def key_listener(k):
    k.listen()
    k.onkeypress(go_right, "Right")
    k.onkeypress(go_left, "Left") 
    k.onkeyrelease(stay, 'Left')
    k.onkeyrelease(stay, 'Right')
def make_ball():
    b = turtle.Turtle()
    b.speed(10)
    b.shape("circle")
    b.color("red")
    b.penup()
    b.setpos(0,-225)
    return b 
def start():
    v0 = 30
    ball.vx = v0 * math.cos(theta * math.pi / 180)
    ball.vy = v0 * math.sin(theta * math.pi / 180)
def move_ball():
    x, y = ball.position()
    x = x + ball.vx
    y = y + ball.vy
    ball.setpos(x,y)
def wall():
    v0 = 50
    x, y= ball.position()
    if x > 250 or x < -250 :
        ball.vx = -1 * ball.vx
    if y > 300 :
        ball.vy = -1 * ball.vy
def hit_target():
    x, y = ball.position()
    for i in targets:
        xg, yg = i.position()
        if abs(x-xg) < 30 and abs(y-yg) < 30:
            ball.vy = -1 * ball.vy
            i.setpos(10000, 0)
            return True
def hit_paddle():
    x, y = ball.position()
    xp, yp = pdl.position()
    if abs(x-xp) < 35 and abs(y-yp) < 35:
        ball.vy = -1 * ball.vy
def score():
    pen = turtle.Turtle()
    pen.speed(0)
    pen.shape("square")
    pen.color("black")
    pen.penup()
    pen.hideturtle()
    return pen                
def update_score():
    score_writer.undo()
    score_writer.hideturtle()
    score_writer.goto(0, 260)
    score_writer.write("Score: {} High Score: {}".format(score, high_score), align="center", font=("Courier", 24, "normal"))
def lose():
    x, y = ball.position()
    if y <-290 :
        return True
# x0 = 0
# y0 = -225
# v0 = 50
theta = random.randint(30,150)
scr = screen()
pdl = make_paddle()
ball = make_ball()
key_listener(scr)
turtle.colormode(255)
make_all_targets()
start()
score_writer = score()
score = 0 
high_score = 0
while True:
    move_ball()
    turtle.colormode(255)
    move_paddle(pdl)
    border()
    wall()
    scr.update()
    hit_paddle()
    if hit_target():
        score = score + 10
    if lose():
        if score > high_score:
            high_score = score
        score = 0
    update_score()
    scr.update()
    time.sleep(0.05)