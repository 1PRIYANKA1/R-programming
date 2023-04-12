# Write a python program to count repeated characters in a string.  

string = input("Enter a string: ")
rep_chars = {}

for char in string:
    if char in rep_chars:
        rep_chars[char] += 1
    else:
        rep_chars[char] = 1

print("Repeated characters in the string: ")
for char, count in rep_chars.items():
    if count > 1:
        print(f"{char} occurs {count} times.")

