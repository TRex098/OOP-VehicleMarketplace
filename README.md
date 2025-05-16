# OOP-VehicleMarketplace

# 🚗 Vehicle Management System (C++ OOP Project)

This is a console-based **Vehicle Management System** developed as a semester project for the Object-Oriented Programming (OOP) course at FAST-NUCES Islamabad. The system is implemented in **C++**, demonstrating real-world use of OOP principles, file handling, and basic cybersecurity concepts.

---

## 📁 Folder Structure Overview

Your folder contains:

- C++ source files: `main.cpp`, `Buyer.cpp`, `Seller.cpp`, `Admin.cpp`, `Vehicle.cpp`, `Auction.cpp`
- Header file: `Class.h`
- Data files: 
  - Vehicle Listings: `newVehicle1-5.txt`, `usedVehicle1-5.txt`, `Bike1-5.txt`
  - Aggregated Lists: `newVehicles.txt`, `usedVehicles.txt`, `Bikes.txt`
  - User Records: `User.txt`, `Seller.txt`, `Buyer.txt`
  - Notifications: `notification.txt`, `Notifications.txt`
  - Visual Studio project files (if you're using VS)

---

## 👥 User Roles & Functionality

### 🛍️ Buyer
- Browse/search/sort vehicles (new, used, bikes)
- View auction listings
- Request inspection reports
- Contact sellers (simulated)
- Add comments and view admin notifications

### 🧑‍💼 Seller
- Register/login
- Add and remove vehicles
- Register vehicles for auction
- View notifications

### 🛠️ Admin
- Manage all vehicle listings
- Generate inspection reports
- Post and delete notifications
- Rate vehicles

---

## 💡 Key Features

- Object-Oriented Design (Encapsulation, Inheritance, Polymorphism)
- Role-based menu system
- File I/O for all persistent data (vehicles, users, inspections, notifications)
- Secure login for all users
- Dynamic memory use
- Clean modular code across multiple files

---

## 🚀 How to Run

### 1. Compile
Make sure all `.cpp` files are in the same directory. Then compile with:
```bash
g++ main.cpp Buyer.cpp Seller.cpp Admin.cpp Vehicle.cpp Auction.cpp -o VehicleSystem
