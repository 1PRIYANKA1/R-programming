# Define a class named Rectangle which can be constructed by a length and width. The 
# Rectangle class has a method which can compute the area and Perimeter.

class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width

    def perimeter(self):
        return 2 * (self.length + self.width)

length = int(input("Enter length of rectangle: "))
width = int(input("Enter width of rectangle: "))

r = Rectangle(length, width)
print("Area of rectangle:", r.area())
print("Perimeter of rectangle:", r.perimeter())
