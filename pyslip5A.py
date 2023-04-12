# Write a Python script using class, which has two methods get_String and print_String. 
# get_String accept a string from the user and print String print the string in upper case. 

class String:
    def get(self):
        self.str = input("Enter a string: ")
        
    def print(self):
        print("String in uppercase: " + self.str.upper())

my_string = String()
my_string.get()
my_string.print()
