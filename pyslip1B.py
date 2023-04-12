# Write Python GUI program to take accept your birthdate and output your age when a button 
# is pressed.

from tkinter import *
from datetime import date

def calculate_age():
    today = date.today()
    by = int(y.get())
    bm = int(m.get())
    bd = int(d.get())
    age = today.year - by - ((today.month, today.day) < (bm, bd))
    age_label.config(text=f"{age} years")

root = Tk()
root.title("Age Calculator")

Label(root, text="birth year:").pack()
y = Entry(root)
y.pack()

Label(root, text="birth month:").pack()
m = Entry(root)
m.pack()

Label(root, text="birth day:").pack()
d = Entry(root)
d.pack()

Button(root, text="Calculate Age", command=calculate_age).pack()
age_label = Label(root, text="")
age_label.pack()

root.mainloop()
