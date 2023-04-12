#Write an R program to create a list of elements using vectors, matrices 
#and a functions. Print the content of the list.

# Create a list with a vector, matrix, and function
my_list <- list(
  my_vector = c(1, 2, 3),
  my_matrix = matrix(1:9, nrow = 3),
  my_function = function(x) x^2
)

# Print the list
my_list
