# Write a Python program to check if a given key already exists in a dictionary. If key exists
#  replace with another key/value pair.	

# Initialize the dictionary
mydict = {'a': 1, 'b': 2, 'c': 3}

# Get the key to check from the user
key = input("Enter a key to check: ")

# Check if the key exists in the dictionary
if key in mydict:

    # If the key exists, get a new key/value pair from the user
    newkey = input("Enter a new key: ")
    newvalue = input("Enter a new value: ")

    # Replace the old key with the new key/value pair
    mydict[newkey] = newvalue
    del mydict[key]
    print("Key updated successfully!")
else:
    print("Key does not exist in the dictionary.")

# Print the updated dictionary
print(mydict)