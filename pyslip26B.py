# Write Python GUI program which accepts a sentence from the user and alters it when a 
# button is pressed. Every space should be replaced by *, case of all alphabets should be 
# reversed, digits are replaced by ?

import tkinter as tk

def modify_sentence():
    sentence = entry.get()
    modified_sentence = ""

    for char in sentence:
        if char.isalpha():
            modified_sentence += char.upper() if char.islower() else char.lower()
        elif char.isdigit():
            modified_sentence += "?"
        elif char.isspace():
            modified_sentence += "*"
        else:
            modified_sentence += char

    output_label.config(text=modified_sentence)

window = tk.Tk()
window.title("Sentence Modifier")

tk.Label(window, text="Enter a sentence:").pack()
entry = tk.Entry(window)
entry.pack()

tk.Button(window, text="Modify Sentence", command=modify_sentence).pack()


window.mainloop()
