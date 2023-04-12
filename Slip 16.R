# Write an R program to extract the five of the levels of factor created from a random sample from the LETTERS

letter=sample(LETTERS, size=20, replace=TRUE)
print(letter)
f=factor(letter)
print("original factor")
print(f)
print("only five of the levels")
print(table(letter[1:5]))