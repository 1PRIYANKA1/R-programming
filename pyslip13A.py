# Write a Python program to input a positive integer. Display correct message for correct and 
# incorrect input. (Use Exception Handling)

try:
    a = int(input("Input a positive integer: "))
    if a <= 0:
        raise ValueError("Invalid input: Please enter a positive integer.")
    else:
        print("You entered a positive integer.")
except ValueError as e:
    print(e)
