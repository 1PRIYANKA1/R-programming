#  Define a class Employee having members id, name, department, salary. Create a subclass 
# called manager with member bonus. Define methods accept and display in both the classes. 
# Create n objects of the manager class and display the details of the manager having the 
# maximum total salary (salary + bonus).

class Employee:
    def accept(self):
        self.id = int(input("Enter emp id:"))
        self.name = input("Enter emp name:")
        self.dept = input("Enter emp dept:")
        self.sal = int(input("Enter emp salary:"))
    
    def display(self):
        print("Emp id:", self.id)
        print("Emp name:", self.name)
        print("Emp dept:", self.dept)
        print("Emp salary:", self.sal)

class Manager(Employee):
    def accept(self):
        Employee.accept(self)
        self.bonus = int(input("Enter manager bonus:"))
    
    def display(self):
        Employee.display(self)
        print("Manager bonus is:", self.bonus)
        print("Total salary(maximum salary):", self.sal + self.bonus)

n = int(input("Enter number of managers: "))
managers = []

for i in range(n):
    manager = Manager()
    manager.accept()
    managers.append(manager)

max_sal = 0
max_manager = None
for manager in managers:
    if manager.sal + manager.bonus > max_sal:
        max_sal = manager.sal + manager.bonus
        max_manager = manager

print("\nMaximum salary (salary+bonus):")
max_manager.display()


