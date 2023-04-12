# Write Python GUI program to add items in listbox widget and to print and delete the 
# selected items from listbox on button click. Provide three separate buttons to add, print and 
# delete.

import tkinter as tk

class App:
    def __init__(self, master):
        self.master = master
        master.title("Listbox Example")

        # Create a listbox widget
        self.listbox = tk.Listbox(master)
        self.listbox.pack()

        # Create an entry widget and a button to add items to the listbox
        self.entry = tk.Entry(master)
        self.entry.pack()
        self.add_button = tk.Button(master, text="Add", command=self.add_item)
        self.add_button.pack()

        # Create a button to delete the selected item(s)
        self.delete_button = tk.Button(master, text="Delete", command=self.delete_items)
        self.delete_button.pack()

    def add_item(self):
        # Add the item from the entry widget to the listbox
        item = self.entry.get()
        self.listbox.insert(tk.END, item)
        self.entry.delete(0, tk.END)

    def delete_items(self):
        # Delete the selected item(s) from the listbox
        items = self.listbox.curselection()
        for item in items[::-1]:
            self.listbox.delete(item)

root = tk.Tk()
app = App(root)
root.mainloop()
