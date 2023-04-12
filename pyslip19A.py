# Write a Python GUI program to accept a number form user and display its multiplication 
# table on button click.

import tkinter as tk

def show_table():
    num = int(entry.get())
    table = ""
    for i in range(1, 11):
        table += str(num) + " x " + str(i) + " = " + str(num*i) + "\n"
    output.config(text=table)

root = tk.Tk()

label = tk.Label(root, text="Enter a number:")
label.pack()

entry = tk.Entry(root)
entry.pack()

button = tk.Button(root, text="Show Table", command=show_table)
button.pack()

output = tk.Label(root, text="")
output.pack()

root.mainloop()
