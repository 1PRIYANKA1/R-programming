#R program to calculate decimal into binary of a given number.
conv_binary=function(n)
{
  if(n>1)
  {
    conv_binary(as.integer(n/2))
  }
  cat(n%%2)
}
decimal=10.8
print("binary number")
binary=conv_binary(decimal)
