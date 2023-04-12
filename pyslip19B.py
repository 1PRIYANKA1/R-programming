# Define a class named Shape and its subclass(Square/ Circle). The subclass has an init 
# function which takes an argument (Length / radius). Both classes should have methods to 
# calculate area and volume of a given shape. 

class Shape:
    pass

class Square(Shape):
    def __init__(self, length):
        self.length = length

    def area(self):
        return self.length * self.length

    def perimeter(self):
        return 4 * self.length

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * self.radius * self.radius

    def circumference(self):
        return 2 * 3.14 * self.radius

l = int(input("Enter Length of Square: "))
s = Square(l)
print("Area of Square:", s.area())
print("Perimeter of Square:", s.perimeter())

r = int(input("Enter Radius of Circle: "))
c = Circle(r)
print("Area of Circle:", c.area())
print("Circumference of Circle:", c.circumference())
