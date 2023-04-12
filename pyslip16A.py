# Write a python script to create a class Rectangle with data member’s length, width and 
# methods area, perimeter which can compute the area and perimeter of rectangle.

class Rect:

                def __init__(self,length,width):

                                self.length=length

                                self.width=width

                def RectArea(self):

                                self.area=self.length * self.width

                                print("Area of Rectangle:", self.area)

                def RectPer(self):

                                self.peri=2*(self.length + self.width)

                                print("Perimeter of Rectangle:", self.peri)

 

length=int(input("Enter Length:"))

width=int(input("Enter Width:"))

 

b=Rect(length,width)

b.RectArea()

b.RectPer()

