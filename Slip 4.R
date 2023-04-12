#Write an R program to extract first 10 english letter in lower case and 
#last 10 letters in upper case & extract letters b/w 22 to 24 letters in
#upper case


print("first 10 letters in lower case is: ")
a=head(letters,10)
print(a)
print("last 10 letters in upper case is: ")
b=tail(LETTERS,10)
print(b)
print("Letters between 22nd to 24th letter in upper case: ")
c=tail(LETTERS[22:24])
print(c)