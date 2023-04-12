#Consider the plantGrowth inbuilt dataset
#i]create a variable y and attach to it the output attribute of the plant growth dataset.
#ii]create a barplot to breakdown your output atttribut.
#iii]create a density plot matrix for each attribut by class value.
library(ggplot2)
# load the dataset
data(plantGrowth)


# i] create a variable y and attach to it the output attribute of the plant growth dataset.
y <- plantGrowth$weight

# ii] create a barplot to breakdown your output attribute.
barplot(table(y))

# iii] create a density plot matrix for each attribute by class value.

ggplot(plantGrowth, aes(x = weight, fill = group)) + 
  geom_density(alpha = 0.5) + 
  facet_wrap(~ group)


