# Create a class circles having members radius. Use operator overloading to add the radius of 
# two circle objects. Also display the area of circle. 

class Circle:
    def __init__(self, radius):
        self.radius = radius

    def __add__(self, other):
        return Circle(self.radius + other.radius)

    def area(self):
        return self.radius ** 2 * 3.14

circle1 = Circle(5)
circle2 = Circle(3)
circle3 = circle1 + circle2

print(circle1.radius)
print(circle2.radius)
print("Radius of circle 3 (sum of circle 1 and 2): ", circle3.radius)

print("Area of circle 1: ", circle1.area())
print("Area of circle 2: ", circle2.area())
print("Area of circle 3: ", circle3.area())

