# 🏫 **FACULTY MANAGEMENT SYSTEM (C Programming)**
##📄 **ABSTRACT**

The **Faculty Management System** is a terminal-based application written in **C** that allows users to manage faculty records efficiently. It provides essential functionalities such as adding, viewing, searching, updating, and deleting faculty member details.

All records are stored persistently in a binary file (faculty.txt) ensuring the data remains saved across program runs.

This project demonstrates key C programming concepts including **structures**, **file handling**, **control flow**, **loops**, and **modular programming**, **making it suitable for beginners**, **academic projects**, and **practical learning**.
---


## ✨ **FEATURES**
Core Functionalities

➕ Add new faculty member records (ID No, Name, Age, Department, Mobile No)
📋 Display all faculty records in a formatted table
🔍 Search faculty by ID Number
✏️ Update existing faculty information
❌ Delete faculty records
💾 Persistent data storage using binary file (faculty.txt)
🖥️ Fully terminal-based, menu-driven interface
👨‍💻 Beginner-friendly modular code
⚙️ Auto-creates the data file if missing
⚠️ Includes basic input validation & error handling

## 🛠️ **TECHNICAL REQUIREMENTS**
### **System Requirements**

Operating System: Windows / Linux / macOS

Terminal or Command Prompt

At least 4 MB RAM

Minimal disk space for faculty.txt

### **Software Requirements**

C Compiler:  **GCC / MinGW / Clang / MSVC**

Code Editor or IDE: VS Code, Code::Blocks, Dev-C++, etc.

Optional: Make utility (if using a Makefile)

### **Programming Requirements**

Language:  **C**

Standard Supported: **C89 / C99 / C11**

Header files required:

stdio.h

stdlib.h

string.h

### **File Handling**

Read/Write permissions in working directory

Records stored in binary format (faculty.txt)

File auto-created if not found

---

## 📌 **FUNCTIONAL REQUIREMENTS**
### **User Interface**

Terminal-based CLI

Clean menu-driven navigation

Validates user input

---

## 🏫 **Faculty Operations**
## ➕ **Add Faculty**

Enter ID No, Name, Age, Department, Mobile No
Saved in faculty.txt

### 📋 **Display Faculty**

Shows all faculty records in a clean table format

### 🔍 **Search Faculty**

Search using unique ID Number

### ✏️ **Update Faculty**

Modify Name, Age, Department, Mobile No, etc.

### ❌ **Delete Faculty**

Permanently removes a faculty record using temporary file method

### 🔧 **DATA MANAGEMENT**

Binary file storage → Fast and efficient

Safe updates and deletions

Handles empty/missing file gracefully

### 🔄  **PROGRAM FLOW**

Menu runs in a loop

Exit option included

Shows clear success/error messages appropriately

---

## ▶️ **Running the Program**
## 1️⃣ **Compile
gcc faculty.c -o faculty
###  2️⃣ Run

**Linux / macOS**

./faculty


**Windows**

faculty.exe

## 3️⃣ Data File

Automatically creates faculty.txt

Stores all faculty data in binary form

## 📸 **Screenshots (Optional)**

Add Faculty

Display Faculty

Search Faculty

Delete Faculty

Exit

##📝 **Author**

**L.Venkateswarlu**
