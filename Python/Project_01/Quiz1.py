import tkinter as tk
from tkinter import messagebox
from tkinter import ttk
import time

# List of questions, options, and answers
questions = [
    ["What language is this code written in?", "Python", "Java", "C", "C++", 1],
    ["Which language is used to make Facebook?", "C#", "JavaScript", "PHP", "Go", 3],
    ["What is the value of the following expression: (8^5 - 12 + (6 // 3))?", "34", "30", "28", "26", 2],
    ["In HTML, which tag is used to create a hyperlink?", "<link>", "<a>", "<herf>", "<url>", 2],
    ["Which SQL command is used to retrieve data from a database?", "GET", "FETCH", "SELECT", "RETRIEVE", 3],
    ["Which data structure operates on a Last In First Out (LIFO) basis?", "Queue", "Stack", "Heap", "List", 2],
    ["What is the output of '2' + '3' in Python?", "5", "'23'", "TypeError", "None of the above", 2],
    ["Which programming language is often used for data analysis and scientific computing?", "Java", "R", "C++", "Swift", 2],
    ["What does CSS stand for in web development?", "Cascading Style Sheets", "Computer Style Sheets", "Creative Style Sheets", "Colorful Style Sheets", 1],
    ["What is the capital of France?", "Paris", "Berlin", "London", "Madrid", 1]
]

# Initialize the tkinter window
root = tk.Tk()
root.title("KBC Quiz Game")
root.geometry("800x600")
root.configure(bg="#1e1e2f")

# Define variables
current_question = 0
score = 0
prize_money = 0
prizes = ["₹1,000", "₹2,000", "₹3,000", "₹5,000", "₹10,000", "₹20,000", "₹40,000", "₹80,000", "₹1,60,000", "₹3,20,000"]

# Function for animations
def animate_button(button):
    original_color = button["bg"]
    for _ in range(3):
        button.config(bg="yellow")
        root.update()
        time.sleep(0.1)
        button.config(bg=original_color)
        root.update()
        time.sleep(0.1)

# Function to display the next question
def display_question():
    global current_question, prize_money
    if current_question < len(questions):
        question_label.config(text=questions[current_question][0])
        option_a.config(text=f"a) {questions[current_question][1]}", state=tk.NORMAL)
        option_b.config(text=f"b) {questions[current_question][2]}", state=tk.NORMAL)
        option_c.config(text=f"c) {questions[current_question][3]}", state=tk.NORMAL)
        option_d.config(text=f"d) {questions[current_question][4]}", state=tk.NORMAL)
        prize_label.config(text=f"Current Prize: {prizes[current_question]}")
    else:
        messagebox.showinfo("Quiz Completed", f"Congratulations! You won {prize_money}!")
        root.destroy()

# Function to handle answer submission
def submit_answer(selected_option, button):
    global current_question, score, prize_money
    animate_button(button)
    correct_answer = questions[current_question][-1]
    if selected_option == correct_answer:
        score += 1
        prize_money = prizes[current_question]
        messagebox.showinfo("Correct", f"Correct Answer! You have won {prize_money}.")
    else:
        messagebox.showerror("Incorrect", f"Wrong Answer! You take home {prize_money if current_question > 0 else '₹0'}.")
        root.destroy()
        return
    current_question += 1
    display_question()

# UI Components
header = tk.Label(root, text="Welcome to KBC Quiz Game", font=("Arial", 24, "bold"), bg="#282c34", fg="white")
header.pack(pady=20, fill=tk.X)

question_label = tk.Label(root, text="", font=("Arial", 16), wraplength=700, bg="#1e1e2f", fg="white", justify="center")
question_label.pack(pady=20)

prize_label = tk.Label(root, text="", font=("Arial", 14), fg="yellow", bg="#1e1e2f")
prize_label.pack(pady=10)

button_frame = tk.Frame(root, bg="#1e1e2f")
button_frame.pack(pady=20)

option_a = tk.Button(button_frame, text="", font=("Arial", 14), width=30, bg="#3e4451", fg="white", command=lambda: submit_answer(1, option_a))
option_a.grid(row=0, column=0, padx=10, pady=10)

option_b = tk.Button(button_frame, text="", font=("Arial", 14), width=30, bg="#3e4451", fg="white", command=lambda: submit_answer(2, option_b))
option_b.grid(row=0, column=1, padx=10, pady=10)

option_c = tk.Button(button_frame, text="", font=("Arial", 14), width=30, bg="#3e4451", fg="white", command=lambda: submit_answer(3, option_c))
option_c.grid(row=1, column=0, padx=10, pady=10)

option_d = tk.Button(button_frame, text="", font=("Arial", 14), width=30, bg="#3e4451", fg="white", command=lambda: submit_answer(4, option_d))
option_d.grid(row=1, column=1, padx=10, pady=10)

# Start the quiz
display_question()

# Run the tkinter main loop
root.mainloop()
