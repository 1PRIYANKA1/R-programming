# Write Python GUI program to add menu bar with name of colors as options to change the 
# background color as per selection from menu option.

import tkinter as tk

def select():
    color = var.get()
    root['bg'] = color

root = tk.Tk()
var = tk.StringVar(root, value='red')
options = ['red', 'green', 'blue', 'yellow', 'white', 'magenta']
option_menu = tk.OptionMenu(root, var, *options)
option_menu.pack(padx=10, pady=10)
button = tk.Button(root, text="Select", command=select)
button.pack(padx=20, pady=10)
root.mainloop()