mydict={'a':2,'b':4}

key=input("enter a key")

if key in mydict:
    newkey=input("enter new")
    newval=input("enter new val")

    mydict[newkey]=newval
    del mydict[key]
    print("update")
else:
    print("not exist")
print(mydict)