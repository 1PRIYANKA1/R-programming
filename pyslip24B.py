from tkinter import *

def convert_to_words(num):
    words = ["Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return " ".join(words[int(d)] for d in str(num))

def display_in_words():
    label.config(text=convert_to_words(entry.get()))

window = Tk()
window.title("Digits to Words Converter")

Label(window, text="Enter a number:").pack()
entry = Entry(window)
entry.pack()

Button(window, text="Convert", command=display_in_words).pack()
label = Label(window)
label.pack()

window.mainloop()
