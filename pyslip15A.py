# Write a Python class named Student with two attributes student name, marks. Modify the 
# attribute values of the said class and print the original and modified values of the said 
# attributes.

class StudentDetails:
    def AcceptDetails(self):
        self.name = input("Enter Student Name:")
        self.mark = int(input("Enter Student Total Marks:"))

    def ModifyDetails(self):
        self.oldmark = self.mark
        self.mark = int(input("Enter Student New Total Marks:"))
        print("Student Name:", self.name)
        print("Old Total Mark:", self.oldmark)
        print("New Total Mark:", self.mark)

S = StudentDetails()
S.AcceptDetails()
S.ModifyDetails()
