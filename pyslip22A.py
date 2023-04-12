# Write a python class to accept a string and number n from user and display n repetition of 
# strings by overloading * operator

class RepeatString:
    def __init__(self, string):
        self.string = string
    
    def __mul__(self, num):
        return self.string * num

string = input("Enter a string: ")
num = int(input("Enter a number: "))

rep_str = RepeatString(string)
print(rep_str * num)
