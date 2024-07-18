import turtle
import time
import random
SCREEN_HEIGHT=600
SCREEN_WIDTH=600
MARGIN=20


def screen():
    s = turtle.Screen()
    s.title("snake game")
    s.bgcolor("blue")
    s.setup(width = SCREEN_WIDTH, height = SCREEN_HEIGHT)
    s.tracer(0)
    return s


def make_head():
    t = turtle.Turtle()
    t.speed(0)
    t.shape("square")
    t.color("black")
    t.penup()
    t.setpos(0, 100)
    t.direction = "stop"
    return t

def move(h):
    x, y = h.position()
    h.speed(10)
    if h.direction == "up":
        h.setpos(x, y + 20)

    if h.direction == "down":
        h.setpos(x, y - 20)

    if h.direction == "right":
        h.setpos(x + 20, y)

    if h.direction == "left":
        h.setpos(x - 20, y)   

def go_up():
    if head.direction != "down":
        head.direction = "up"

def go_down():
    if head.direction != "up":
        head.direction = "down"

def go_right():
    if head.direction != "left":
        head.direction = "right"

def go_left():
    if head.direction != "right":
        head.direction = "left"



def key_listener(k):
    k.listen()
    k.onkey(go_up, "Up")
    k.onkey(go_down, "Down")
    k.onkey(go_right, "Right")
    k.onkey(go_left, "Left")

def food():
    f = turtle.Turtle()
    f.speed(0)
    f.shape("circle")
    f.color("red")
    f.penup()
    f.shapesize(0.50, 0.50)
    f.goto(0, 0)
    return f


def reposition_food(f):
    width_range = SCREEN_WIDTH // 2 - MARGIN
    height_range = SCREEN_HEIGHT // 2 - MARGIN
    new_x = random.randint(-1 * width_range, width_range)
    new_y = random.randint(-1 * height_range, height_range)
    f.setpos(new_x, new_y)

def check_food(f, t):
    xt, yt = t.position()
    xf, yf = f.position()
    return abs(xt-xf) < 15 and abs(yt-yf) < 15

def body():
    a = turtle.Turtle()
    a.speed(0)
    a.shape("square")
    a.color("black")
    a.penup()
    segments.append(a)


def move_segments():
    if len(segments) > 0:
        for i in range(len(segments)-1, 0, -1):
            x_pre_seg, y_pre_seg = segments[i-1].position()
            segments[i].setpos(x_pre_seg, y_pre_seg)
        xh, xy = head.position()
        segments[0].setpos(xh, xy)


def check_border_collision(h):
    x, y = h.position()
    width_range = SCREEN_WIDTH // 2
    height_range = SCREEN_HEIGHT // 2
    return x > width_range or x < (-1 * width_range) or y > height_range or y < (-1 * height_range)


def check_self_collision(h):
    for seg in segments:
        if seg.distance(head) < 10:
            return True
    return False



def update_score():
    score_writer.undo()
    score_writer.hideturtle()
    score_writer.goto(0, 260)
    score_writer.write("Score: {} High Score: {}".format(score, high_score), align="center", font=("Courier", 24, "normal"))
# def update_score()


def reset_game():
    for seg in segments:
        seg.setpos(1000, 0)
    segments.clear()
    food.goto(0, 0)
    head.goto(0,100)
    head.direction = "stop"

def score():
    pen = turtle.Turtle()
    pen.speed(0)
    pen.shape("square")
    pen.color("white")
    pen.penup()
    pen.hideturtle()
    return pen

scr = screen()
head = make_head()
key_listener(scr)
food = food()
segments =[]
score_writer = score()
score = 0 
high_score = 0
while True:
    
    move_segments()
    move(head)
    if check_border_collision(head) or check_self_collision(head):
        if score > high_score:
            high_score = score
        score = 0
        reset_game()
    if check_food(food, head):
        reposition_food(food)
        body()
        score = score + 10

    update_score() 
    scr.update()
    time.sleep(0.2)
    