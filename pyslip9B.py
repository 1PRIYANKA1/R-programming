# Write Python GUI program to accept a number n and check whether it is Prime, Perfect or 
# Armstrong number or not. Specify three radio buttons.

from tkinter import *

root = Tk()

e = Entry(root)
e.pack()

def check():
    value = e.get()
    if value:
        n = int(value)
        if sum(i for i in range(1, n) if n % i == 0) == n and radio.get() == 1:
            result = "Perfect number"
        elif sum(int(digit)**3 for digit in str(n)) == n and radio.get() == 2:
            result = "Armstrong number"
        elif all(n%i for i in range(2, int(n**0.5)+1)) and n > 1 and radio.get() == 3:
            result = "Prime number"
        else:
            result = "Not a valid number"

        label = Label(root, text=result)
        label.pack()

radio = IntVar()

Radiobutton(root, text="Perfect", variable=radio, value=1, command=check).pack()
Radiobutton(root, text="Armstrong", variable=radio, value=2, command=check).pack()
Radiobutton(root, text="Prime", variable=radio, value=3, command=check).pack()

root.mainloop()

