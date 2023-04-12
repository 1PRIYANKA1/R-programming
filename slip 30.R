#Write an R program to sort a list of 10 strings in ascending and 
#descending order.
# Define a list of 10 strings
my_list = list("banana", "apple", "cherry", "date", "fig", "elderberry", "grape", "kiwi", "mango", "lime")

# Sort the list in ascending order
sorted_asc = sort(my_list)
print("Sorted list in ascending order:")
print(sorted_asc)

# Sort the list in descending order
sorted_desc = sort(my_list, decreasing = TRUE)
print("Sorted list in descending order:")
print(sorted_desc)
