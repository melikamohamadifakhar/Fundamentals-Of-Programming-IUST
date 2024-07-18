import turtle
#set up window
def set_window():
    w = turtle.Screen()
    w.bgcolor("black")
    w.title("snake game")
    w.setup(width=500, height=500)
    w.tracer(0)
    return w


#making head
def making_head():
    head = turtle.Turtle()
    head.speed(0)
    head.shape("triangle")
    head.color("red")
    head.penup()
    head.goto(0, 100)
    head.direction = "stop"
    return head




def move(head):
    x, y = head.position()
    if head.direction == "up":
        head.setpos(x, y+20)

    if head.direction == "down":
        head.setpos(x, y-20)

    if head.direction == "right":
        head.setpos(x+20, y)

    if head.direction == "left":
        head.setpos(x-20, y)



def key_listener(s, head):
    s.listen()
    s.onkey(go_up(head), "w")
    s.onkey(go_down(head), "s")
    s.onkey(go_right(head), "d")
    s.onkey(go_down(head), "a")

def go_up(head):
    if head.direction != "down":
        h.direction = "up"

def go_down(head):
    if head.direction != "up":
        h.direction = "down"

def go_right(head):
    if head.direction != "left":
        head.direction = "right"

def go_left(head):
    if head.direction != "right":
        head direction = "left"

while True:
    move(head)
    set_window.update()
    time.sleep(0.1)
