#consider the inbuilt iris dataset
#i] create a variable "y" and attach to it the output attribut of the iris dataset.
#ii] create a bar plot to breakdown your output attribute.
#iii] create a density plot matrix for each attribute by class value.

data(iris)
dataset = iris

x=dataset[,1:4]
y=dataset[,5]
plot(y)