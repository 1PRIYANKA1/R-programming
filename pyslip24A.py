# Write a Python Program to Check if given number is prime or not. Also find factorial of the
#  given no using user defined function.	

num = int(input("Enter a number: "))

# Function to check if a number is prime
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

# Function to calculate factorial of a number
def factorial(n):
    res = 1
    for i in range(1, n+1):
        res = res * i
    return res

if is_prime(num):
    print(num, "is a prime number.")
else:
    print(num, "is not a prime number.")

print("Factorial of", num, "is", factorial(num))


