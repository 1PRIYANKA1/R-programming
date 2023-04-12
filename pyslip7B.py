# Write python GUI program to generate a random password with upper and lower case
# letters. 

import random
import string

password_length = 8
password = ''.join(random.choices(string.ascii_letters, k=password_length))
print("Password:", password)

