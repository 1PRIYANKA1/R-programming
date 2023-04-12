#Write an R program to create a simple bar plot of five subject's marks
marks=c(85,94,97,88,90)
barplot(
  marks,
  main="comparing marks of all the subject",
  xlab="Marks",
  ylab="Subjects",
  names.arg=c("CPP","BD","Python","OOSE","Project"),
  col="blue",
  horiz=FALSE
        )
