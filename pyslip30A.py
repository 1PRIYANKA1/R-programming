# Write a Python GUI program to accept a string and a character from user and count the 
# occurrences of a character in a string. 

from tkinter import *

win = Tk()
res = StringVar()
Label(win, text="Enter a string:").grid(row=0)
Label(win, text="Enter a character:").grid(row=1)
Label(win, text="Result:").grid(row=3)

result = Label(win, textvariable=res)
result.grid(row=3, column=1)

e1 = Entry(win)
e1.grid(row=0, column=1)

e2 = Entry(win)
e2.grid(row=1, column=1)

def count_char():
    s = e1.get()
    c = e2.get()
    count = s.count(c)
    res.set(count)

Button(win, text="Count", command=count_char).grid(row=2, column=1, pady=5)

win.mainloop()
