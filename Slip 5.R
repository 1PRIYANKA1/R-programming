#Write R program to compare 2 data frames to find the elements in first 
#data frame that is not present in second data frame.


df1=data.frame(
  item=c("item1","item2","item3"),
  item_name=c("car","pen","shoes"),
  item_cost=c(30,10,100)
  )

df2=data.frame(
  item=c("item1","item2","item3"),
  item_name=c("car","pen","shoes"),
  item_cost=c(30,10,500)
)

print("Original dataframes")
print(df1)
print(df2)

print("element that are not present in 2nd data frame : ")
setdiff(df1,df2)

