# Write a python script to define the class person having members name, address. Create a 
# subclass called Employee with members staffed salary. Create 'n' objects of the Employee 
# class and display all the details of the employee.

class Person:
    def AcceptPer(self):
        self.Name = input("Enter Person name:")
        self.address = input("Enter Person Address:")
  
    def DisplayPer(self):
        print("Person Name:", self.Name)
        print("Person Address:", self.address)

class Employee(Person):
    def AcceptEmp(self):
        self.salary = int(input("Enter SALARY"))
  
    def DisplayEmp(self):
        print("Employee salary is:", self.salary)

n = int(input("Enter How many Employees: "))
s = []
for i in range(n):
    s.append(Employee())
    s[i].AcceptPer()
    s[i].AcceptEmp()

print("\nDisplaying Employee Details:\n")
for i in range(n):  
    s[i].DisplayPer()
    s[i].DisplayEmp()
    print()
