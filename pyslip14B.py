# Write a Python program to display plain text and cipher text using a Caesar encryption.

def encrypt(string, shift):
    encrypted = ""
    for c in string:
        if c.isupper():
            encrypted += chr((ord(c) - 65 + shift) % 26 + 65)
        elif c.islower():
            encrypted += chr((ord(c) - 97 + shift) % 26 + 97)
        else:
            encrypted += c
    return encrypted

text = input("Enter string: ")
shift = int(input("Enter shift number: "))
encrypted = encrypt(text, shift)
print("Original string:", text)
print("Encrypted string:", encrypted)
