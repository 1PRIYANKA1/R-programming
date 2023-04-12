# Write Python GUI program to display an alert message when a button is pressed. 

from tkinter import messagebox, Tk, Button

root = Tk()

def alert():
    messagebox.showinfo("Alert", "Button was pressed!")

button = Button(root, text="Press me!", command=alert)
button.pack()

root.mainloop()
