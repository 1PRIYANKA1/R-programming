# Write a python program to create a class Circle and Compute the Area and the 
# circumferences of the circle. (use parameterized constructor) 

class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * self.radius * self.radius

    def circumference(self):
        return 2 * 3.14 * self.radius

# create object of Circle class
c = Circle(5)

# calculate and print area and circumference of circle
print("Area of circle:", c.area())
print("Circumference of circle:", c.circumference())
