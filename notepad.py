import turtle

# create a turtle object
t = turtle.Turtle()

# set the turtle's speed and pen color
t.speed(0)
t.pencolor("red")

# define a function to draw the heart shape
def heart():
    t.penup()
    t.goto(0, -150)
    t.pendown()
    t.begin_fill()
    
    #t.color("orange")
    t.left(45)
    t.forward(200)
    t.circle(100, 180)
    t.right(90)
    t.circle(100, 180)
    t.forward(200)
    t.end_fill()

# ask for user input for the name
name = "I love you  "

# draw the heart shape
heart()

# move the turtle to the center of the heart
t.penup()
t.goto(0, 0)
t.pendown()

# write the name in the center of the heart
t.write(name, align="center", font=("Arial", 20, "normal"))

# hide the turtle cursor
t.hideturtle()

# keep the window open until the user closes it
turtle.done()
