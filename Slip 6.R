#Write an R program to create a data frame using two given vectors and display the duplicted elements and unique rows of the said data frame.
p=c(1,2,1,4,5)
q=c(1,20,1,40,5)
pq=data.frame(p,q)
print(pq)
print("duplicate elements: ")
duplicated(pq)
print("unique elements: ")
unique(pq)