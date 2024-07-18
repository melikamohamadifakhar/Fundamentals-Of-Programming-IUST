import turtle
import time

def init_screen():
    #set up the screen
    w = turtle.Screen()
    w.title("Snake game")
    w.bgcolor("blue")
    w.setup(width=600,height=600)
    w.tracer(0)
    return w

def init_snake_head():
    t = turtle.Turtle()
    t.speed(0)
    t.shape("square")
    t.color("black")
    t.penup()
    t.goto(0, 100)
    t.direction = "stop"
    return t

def move(h):
    x, y = h.position()
    if h.direction == "up":
        h.setpos(x, y + 20)
 
    if h.direction == "down":
        h.setpos(x, y - 20)
 
    if h.direction == "right":
        h.setpos(x + 20, y)
 
    if h.direction == "left":
        h.setpos(x - 20, y)

def init_key_listener(s, h):
    s.listen()
    s.onkey(go_up(h), "w")
    s.onkey(go_down(h), "s")
    s.onkey(go_right(h), "d")
    s.onkey(go_left(h), "a")    


def go_up(h):
    if h.direction != "down":
        h.direction = "up"

def go_down(h):
    if h.direction != "up":
        h.direction = "down"

def go_left(h):
    if h.direction != "right":
        h.direction = "left"

def go_right(h):
    if h.direction != "left":
        h.direction = "right"

scrn = init_screen()
h = init_snake_head()
init_key_listener(scrn, h)


while True:
    move(h)
    scrn.update()
    time.sleep(0.1)

