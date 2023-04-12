

binaryy = function(n) {
  if (n > 1) {
    binaryy(as.integer(n / 2))
  }
  cat(n %% 2)
}

decimal = 10.35
print("decimal number")
print(decimal)
print("binary number")
binaryy(decimal)



