# Define a class Date (Day, Month, Year) with functions to accept and display it. Accept date 
# from user. Throw user defined exception “invalid Date Exception” if the date is invalid. 

class exceperror(Exception):
    def __init__(self,message="invalid date"):
        super().__init__(self,message)

try:
    a=int(input("enter day:"))
    b=int(input("enter month"))
    c=int(input("enter year"))

    print(a,"/",b,"/",c)

    if a>31:
        raise exceperror
    if b>12:
        raise exceperror
    if c<0:
        raise exceperror
except exceperror:
    print("Invalid date")

     