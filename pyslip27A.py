# Write a Python program to unzip a list of tuples into individual lists.

a = [('A',2), ('B',4), ('C',9)]

print(list(zip(*a)))
