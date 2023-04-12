#Consider the inbuilt mtcar dataset
#i] Subset the vector, "mtcars[,1]", for values greater than "15.0".
#ii] Subset "airquality" for "Ozone" greater than "28", or "Temp" greater than "70". Return the firstt five rowsum()
#iii] Subset "airquality" for "ozone" greate than "100". Select the columns "Ozone", "temp" , "month" and "day" only.

#create a subset data
data("mtcars") #access to the data
subset(mtcars[,1],mtcars[,1]>15.0)
head(subset(airquality,Ozone>28 | Temp > 70))
subset(airquality, Ozone > 100, select=c(Ozone, Temp, Month, Day))

