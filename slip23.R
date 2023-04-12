#Write a script in R to create two vectors of different lengths and give these vectors as input to array and print second row of second matrix of the array. 				         [20]

vector1 <- c(1, 2, 3, 4, 5)
vector2 <- c(6, 7, 8)

# Combine the two vectors into an array
array1 <- array(c(vector1, vector2), dim = c(2, 3, 2))

# Print the second row of the second matrix in the array
print(array1[2, , 2])