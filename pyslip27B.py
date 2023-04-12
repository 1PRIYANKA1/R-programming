# Write Python GUI program to accept a decimal number and convert and display it to binary, 
# octal and hexadecimal number

from tkinter import *

window = Tk()
window.title("Number Converter")

Label(window, text="Enter Decimal Number:").grid(row=0)
Label(window, text="Binary:").grid(row=3)
Label(window, text="Octal:").grid(row=4)
Label(window, text="Hexadecimal:").grid(row=5)

e1 = Entry(window)
e1.grid(row=0, column=1)

label_text = StringVar()
Label(window, textvariable=label_text).grid(row=3, column=1)
label_text1 = StringVar()
Label(window, textvariable=label_text1).grid(row=4, column=1)
label_text2 = StringVar()
Label(window, textvariable=label_text2).grid(row=5, column=1)

def calculate():
    res = int(e1.get())
    label_text.set(bin(res))
    label_text1.set(oct(res))
    label_text2.set(hex(res))

Button(window, text="Calculate", command=calculate).grid(row=0, column=2)

mainloop()
