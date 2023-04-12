#Write an R program to calculate multiplication table.

# prompt the user to enter a number
num <- as.integer(readline(prompt = "Enter a number: "))

# calculate the multiplication table
for (i in 1:10) {
  result <- num * i
  print(paste0(num, " x ", i, " = ", result))
}
