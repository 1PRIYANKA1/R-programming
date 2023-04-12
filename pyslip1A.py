#Write a Python program to accept n numbers in list and remove duplicates from a list

# Accept n numbers in list
num_list = list(set([int(input()) for i in range(int(input()))]))
print("Original list:", num_list)
