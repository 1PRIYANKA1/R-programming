#Write a Python script to generate and print a dictionary which contains a number (between 1 and n) in the form(x,x*x). 
# Sample Dictionary (n=5) 
# Expected Output: {1:1, 2:4, 3:9, 4:16, 5:25}   
 
n = int(input("Enter a number: "))

# Create an empty dictionary to store the results
num_dict = {}

# Loop through each number from 1 to n
for i in range(1, n+1):
    # Add the number and its square to the dictionary
    num_dict[i] = i*i

# Print the dictionary
print(num_dict)