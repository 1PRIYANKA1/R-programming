#Write an R program to create three vectors a,b,c with 3 integers. Combine the three vectors to become a 3 x 3 matrix with each column represents a vector. Print the content of the matrix.

a=c(3,2,1)
b=c(6,5,4)
c=c(9,8,7)
m=cbind(a,b,c)

print("content of the matrix")
print(m)
