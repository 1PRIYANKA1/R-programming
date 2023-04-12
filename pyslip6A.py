# Write python script using package to calculate area and volume of cube and sphere 

import math
r=float(input("Enter radius"))

s_area=4*math.pi*pow(r,2)
print("surface area of sphere: %.2f" %s_area)

volume=(4/3)*math.pi*pow(r,3)
print("vol of sphere %.2f" %volume)

av=6*pow(r,2)
print("area of cube %.2f" %av)

vc=pow(r,3)
print("vol of cube %.2f" %vc)