# Write Python GUI program that takes input string and change letter to upper case when a 
# button is pressed.

import tkinter as tk

root = tk.Tk()
root.title("Text Converter")

entry = tk.Entry(root)
entry.pack()

button = tk.Button(root, text="Convert", command=lambda: convert_text(entry))
button.pack()

def convert_text(entry):
    text = entry.get()
    uppercase_text = text.upper()
    entry.delete(0, tk.END)
    entry.insert(0, uppercase_text)

root.mainloop()

