# Write Python GUI program to create background with changing colors.

import tkinter as tk
import random

root = tk.Tk()
root.title("Color Changing Background")
colors = ["red", "green", "white"]

def change():
    root.configure(bg=random.choice(colors))
    root.after(1000, change)

change()

root.mainloop()

