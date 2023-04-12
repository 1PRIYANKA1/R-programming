# Write a python script to generate Fibonacci terms using generator function.

def fibonacci():

    a=0

    b=1

    c=int(input("Enter the Number:-"))

    for i in range(c):

        print(b)

        a,b= b,a+b

obj = fibonacci()