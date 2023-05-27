import tkinter as tk
from tkinter import filedialog

# Function to create a new file
def new_file():
    text.delete("1.0", tk.END)

# Function to open a file
def open_file():
    file_path = filedialog.askopenfilename()
    if file_path:
        text.delete("1.0", tk.END)
        with open(file_path, "r") as file:
            text.insert(tk.END, file.read())

# Function to save a file
def save_file():
    file_path = filedialog.asksaveasfilename()
    if file_path:
        with open(file_path, "w") as file:
            file.write(text.get("1.0", tk.END))

# Create the main window
root = tk.Tk()
root.title("Simple Notepad")

# Create a text widget
text = tk.Text(root, wrap=tk.WORD)
text.pack(expand=tk.YES, fill=tk.BOTH)

# Create a menu bar
menu_bar = tk.Menu(root)
root.config(menu=menu_bar)

# Create a file menu
file_menu = tk.Menu(menu_bar)
menu_bar.add_cascade(label="File", menu=file_menu)
file_menu.add_command(label="New", command=new_file)
file_menu.add_command(label="Open", command=open_file)
file_menu.add_command(label="Save", command=save_file)
file_menu.add_separator()
file_menu.add_command(label="Exit", command=root.quit)

# Run the main event loop
root.mainloop()
