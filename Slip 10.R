#R program to change the first level of a factor with another  level of a given factor.
v=c("a","d","p","r")
print("original vector")
print(v)
f=factor(v)
print(f)
levels(f)[1]="l"
print("changed factor")
print(f)
