# Write a Python GUI program to create a label and change the label font style (font name, 
# bold, size) using tkinter module. 

from tkinter import *

win= Tk()
win.geometry("650x250")

def size_1():
    text.config(font=('Arial',20), bg="gray51", fg="white")

def size_2():
    text.config(font=('Helvetica bold',40), bg="white", fg="red")

text = Label(win, text="Hello World!")
text.pack()

Label(text="Select the Font-Size").pack()

Checkbutton(text="Arial - 20", command=size_1).pack(pady=10)
Checkbutton(text="Helvetica - 40", command=size_2).pack(pady=10)

win.mainloop()
