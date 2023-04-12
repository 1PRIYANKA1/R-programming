# Write a Python GUI program to create a label and change the label font style (font name, 
# bold, size) using tkinter module.

from tkinter import *

win = Tk()
win.geometry("400x200")

def size_1():
    text.config(font=('Arial', 20))

def size_2():
    text.config(font=('Helvetica bold', 40))

text = Label(win, text="Hello World!")
text.pack(pady=20)

frame = Frame(win)

Label(frame, text="Select the Font-Size").pack()

button1 = Checkbutton(frame, text="Arial - 20", command=size_1)
button1.pack(pady=10)

button2 = Checkbutton(frame, text="Helvetica - 40", command=size_2)
button2.pack(pady=10)

frame.pack()

win.mainloop()
