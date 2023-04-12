#Write a script in R to create two vectors of different lengths and give these vectors as input to array and print addition and subtraction of those matrices.

# create two vectors of different lengths
vec1 <- c(1, 2, 3)
vec2 <- c(4, 5)

# combine the two vectors into an array
arr <- array(c(vec1, vec2), dim=c(length(vec1), length(vec2)))

# perform addition and subtraction on the arrays
add <- arr + arr
sub <- arr - arr

# print the matrices
print(add)
print(sub)