# Write a Python GUI program to calculate volume of Sphere by accepting radius as input. 

from tkinter import *

def vol():
    r = 4/3 * 3.14 * int(e1.get())**3
    res.set(r)

win = Tk()
res = StringVar()

Label(win, text="Enter Radius Number:").grid()
e1 = Entry(win)
e1.grid(row=0, column=1)

Label(win, text="Result:").grid()
result = Label(win, textvariable=res)
result.grid(row=1, column=1)

Button(win, text="Calculate", command=vol).grid(column=2, row=0, rowspan=2, padx=5)

mainloop()

