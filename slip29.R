#Write a script in R to create a list of students and perform the following 
#1) Give names to the students in the list.
#2) Add a student at the end of the list.
#3) Remove the first Student.
#4) Update the second last student.
# Create list of students
students <- list("Alice", "Bob", "Charlie", "David")

# Give names to students
names(students) <- c("S1", "S2", "S3", "S4")

# Add student at the end of the list
students[["S5"]] <- "Eve"

# Remove first student
students <- students[-1]

# Update second last student
students[["S3"]] <- "Daniel"

# Print final list
print(students)
