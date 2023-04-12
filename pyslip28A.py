# Write a Python GUI program to create a list of Computer Science Courses using Tkinter 
# module (use Listbox)

from tkinter import *

import tkinter

top = Tk()

Lb1 = Listbox(top)

Lb1.insert(1, "Python")

Lb1.insert(2, "HTML")

Lb1.insert(3, "C")

Lb1.insert(4, "CPP")

Lb1.insert(5, "JS")

Lb1.insert(6, "SQL")

Lb1.pack()

top.mainloop()