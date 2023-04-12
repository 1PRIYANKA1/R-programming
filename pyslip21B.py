# Write a Python program to convert a tuple of string values to a tuple of integer values. 
# Original tuple values: (('333', '33'), ('1416', '55')) New tuple values: ((333, 33), (1416, 55))

tuple_str = (('333', '33'), ('1416', '55'))
tuple_int = tuple((int(x), int(y)) for x, y in tuple_str)
print("Original tuple values:", tuple_str)
print("New tuple values:", tuple_int)
