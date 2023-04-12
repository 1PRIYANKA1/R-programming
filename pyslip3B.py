# Write a python script to define a class student having members roll no, name, age, gender. 
# Create a subclass called Test with member marks of 3 subjects. Create three objects of the 
# Test class and display all the details of the student with total marks. 

class Student:
    def __init__(self):
        self.RollNo = int(input("\nEnter Student Roll No:"))
        self.Name = input("Enter Student Name:")
        self.Age = int(input("Enter Student Age:"))
        self.Gender = input("Enter Student Gender:")

    def display(self):
        print("\nDisplay Details of Student")
        print("Student Roll No:", self.RollNo)
        print("Student Name:", self.Name)
        print("Student Age:", self.Age)
        print("Student Gender:", self.Gender)


class Test(Student):
    def __init__(self):
        Student.__init__(self)
        self.M1 = int(input("Enter Marks of M1 Subject:"))
        self.M2 = int(input("Enter Marks of M2 Subject:"))
        self.M3 = int(input("Enter Marks of M3 Subject:"))
    
    def display(self):
        Student.display(self)
        print("M1 Marks:", self.M1)
        print("M2 Marks:", self.M2)
        print("M3 Marks:", self.M3)
        print("Total Marks:", self.M1 + self.M2 + self.M3)


n = int(input("Enter How many students: "))
students = [Test() for i in range(n)]
for student in students:
    student.display()

