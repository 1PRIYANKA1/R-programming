# Write a Python class which has two methods get_String and print_String. get_String 
# accept a string from the user and print_String print the string in upper case. Further 
# modify the program to reverse a string word by word and print it in lower case. 

class MyClass:

    def get_string(self):
        self.my_string = input("Enter any string: ")

    def display_output(self):
        print("Upper case:", self.my_string.upper())
        print("Reverse & lower case:", self.my_string[::-1].lower())

a = MyClass()
a.get_string()
a.display_output()