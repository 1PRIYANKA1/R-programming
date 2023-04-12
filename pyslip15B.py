# Write a python program to accept string and remove the characters which have odd index values of given string using user defined function.					         [20]

def remove_odd_index_chars(string):
    # Initialize an empty string to store the result
    result = ""
    # Loop through each character in the string
    for i in range(len(string)):
        # Only add the character to the result if its index is even
        if i % 2 == 0:
            result += string[i]
    return result

# Prompt the user for input
string = input("Enter a string: ")

# Call the remove_odd_index_chars function and print the result
new_string = remove_odd_index_chars(string)
print("Result:", new_string)