# Write Python GUI program to create a digital clock with Tkinter to display the time.

import time
from tkinter import *

root = Tk()
root.title("Digital Clock")
lbl = Label(root, font=("Arial", 20, 'bold'), bg="green", fg="white")
lbl.pack(pady=30)

def dclock():
    lbl.config(text=time.strftime("%H:%M:%S"))
    lbl.after(200, dclock)

dclock()
root.mainloop()

