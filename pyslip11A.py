#Write a Python program to compute element-wise sum of given tuples. 
# Original lists: (1, 2, 3, 4) (3, 5, 2, 1) (2, 2, 3, 1) 
# Element-wise sum of the said tuples: (6, 9, 8, 6)	
 
tuple1 = (1, 2, 3, 4)
tuple2 = (3, 5, 2, 1)
tuple3 = (2, 2, 3, 1)

# Create a new tuple to store the element-wise sum
sum_tuple = tuple(map(sum, zip(tuple1, tuple2, tuple3)))

print("Original tuples:")
print(tuple1)
print(tuple2)
print(tuple3)

print("Element-wise sum of the tuples:")
print(sum_tuple)