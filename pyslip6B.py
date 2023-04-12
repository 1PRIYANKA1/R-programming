# Write a Python GUI program to create a label and change the label font style (font name, 
# bold, size). Specify separate check button for each style. 

from tkinter import *

fontt = Tk()
fontt.geometry("400x200")

def s1():
    text.config(font=('Arial', 20))

def s2():
    text.config(font=('Helvetica bold', 40))

text = Label(fontt, text="Priyanka")
text.pack(pady=20)

frame = Frame(fontt)

Label(frame, text="Select the Font-Size").pack()

button1 = Checkbutton(frame, text="Arial - 20", command=s1)
button1.pack(pady=10)

button2 = Checkbutton(frame, text="Helvetica - 40", command=s2)
button2.pack(pady=10)
frame.pack()
fontt.mainloop()
