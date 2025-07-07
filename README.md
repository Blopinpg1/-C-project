
  TEAM MEMBERS
<h3> Bibek oli, Kaushal Adhikari, "Nabin Joshi",Abisekh Karki <h3>

# 🏨 Hotel Paradise Management System

> A comprehensive C-based hotel management system that includes room booking, financial services, employee and customer management, gaming, restaurant billing, and more.

---

## 📌 Project Overview

This is a **Hotel Paradise Management System** written in **C**, offering various functionalities such as:

- 🛏️ Room Booking (Presidential Suite, Premium Room, Deluxe Room)
- 💰 Financial Services (Deposit, Withdrawal, Transfer)
- 👥 Employee and Customer Data Management
- 📚 Library Management System
- 🍽️ Restaurant Billing System
- 🎮 Built-in Rock-Paper-Scissors Game
- 🔐 Secure Login & Registration System

The system uses basic file handling to store records like bookings, bills, user data, and logs.

---

## 🧩 Features

| Feature | Description |
|--------|-------------|
| 🛏️ Room Booking | Customers can book rooms based on availability and type. Bill generation included. |
| 💳 Financial Services | Deposit, withdraw, transfer money, and view balance. |
| 👤 User Authentication | Register and login with phone number and password. |
| 📚 Library System | Add, issue, list, and remove books from the library. |
| 🍽️ Restaurant Billing | Generate detailed invoices with discounts and taxes. |
| 🎮 Mini Game | Play Rock Paper Scissors within the system. |
| 👥 Employee Management | Manage employee records (add, edit, delete). |
| 🗂️ File-Based Storage | All data is stored in `.dat` or `.txt` files using binary/sequential access. |

---

## 🧑‍💻 Technologies Used

- **Language**: C
- **Libraries Used**:  
  - `stdio.h`, `stdlib.h`, `string.h`, `conio.h`, `windows.h`, `time.h`, etc.
- **File Handling**: To persist data across sessions.
- **Console Graphics**: Using `gotoxy()` for better UI layout in terminal.

---

## ▶️ How to Run

1. **Clone the repository**
   ```bash
   git clone https://github.com/yourusername/hotel-paradise.git 
   cd hotel-paradise

   Compile the code using any C compiler (e.g., GCC, Turbo C++, Code::Blocks):
   gcc main.c -o hotel-paradise
   ./hotel-paradise

  **📁 File Structure**
  **hotel-paradise/
├── main.c              # Main source file
├── README.md           # This file
├── customer_detail.txt # Stores customer booking details
├── EMP.DAT             # Employee records
├── RestaurantBill.dat  # Restaurant invoice data
├── books.txt           # Book inventory
└── issue.txt           # Issued books log**

✅ Sample Use Cases
Book a Room : Choose from available types, enter personal info, and receive a reservation ID.
Login/Register : Create an account or log in to access banking and game features.
Banking : Deposit, withdraw, or transfer funds securely.
Restaurant : Generate and save invoices after meals.
Library : Issue or return books with automatic date logging.
Game : Enjoy a quick round of Rock-Paper-Scissors!


