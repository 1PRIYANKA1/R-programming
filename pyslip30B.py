# Python Program to Create a Class in which One Method Accepts a String from the User and 
# Another method Prints it. Define a class named Country which has a method called print 
# Nationality. Define subclass named state from Country which has a mehtod called 
# printState. Write a method to print state, country and nationality.

class Country:

        def AcceptCountry(self):

                    self.cname=input("Enter Country Name: ")

        def DisplayCountry(self):

                    print("Country Name is:", self.cname)

 

class State(Country):

         def AcceptState(self):

                    self.sname=input("Enter State Name: ")

         def DisplayState(self):

                    print("State Name is:", self.sname)

#main body

Obj=State()

Obj.AcceptCountry()

Obj.AcceptState()

Obj.DisplayCountry()

Obj.DisplayState()

 

