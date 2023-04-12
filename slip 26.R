#Write a script in R to create an array, passing in a vector of values and a vector of dimensions. Also provide names for each dimension. 

# Create a vector of values
values <- c(1, 2, 3, 4, 5, 6, 7, 8)

# Create a vector of dimensions
dimensions <- c(2, 2, 2)

# Create an array using values and dimensions
my_array <- array(values, dimensions)

# Add dimension names to the array
dimnames(my_array) <- list(c("dim1a", "dim1b"), c("dim2a", "dim2b"), c("dim3a", "dim3b"))

# Print the array with dimension names
print(my_array)
