#write an R program to concatenete two given factor in a single factor and display in descending order.
color1=c("red","blue","green")  #vector
f1=factor(color1)             #factor
color2=c("yellow","white","pink")
f2=factor(color2)
print(f1)
print(f2)
f=factor(c(levels(f1)[f1], levels(f2)[f2]))
print("concatenation: ")
print(f)