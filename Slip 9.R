#Write a script in R to create a list of cities and perform the following
#1] Give names to the elements in the list.
#2] Add an element at the end of the list.
#3] Remove the last element. 4]Update the 3rd element.

# create a list of cities
cities <- c("New York", "Paris", "Tokyo", "London")

# give names to the elements in the list
names(cities) <- c("city1", "city2", "city3", "city4")

# add an element at the end of the list
cities[5] <- "Shanghai"

# remove the last element
cities <- cities[-5]

# update the 3rd element
cities[3] <- "Beijing"

# print the updated list of cities
print(cities)


