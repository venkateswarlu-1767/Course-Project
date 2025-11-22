# Course-Project
Faculty Management System

A simple console-based C program to manage faculty records, including adding, viewing, and searching faculty information. This project demonstrates file handling, structures, and basic menu-driven programming in C.

Features

Add faculty records with ID, name, department, and qualification.

View all faculty records stored in a text file.

Search for a faculty member by their ID.

Menu-driven interface for easy interaction.

Getting Started
Prerequisites

C compiler (GCC or any standard C compiler)

Basic understanding of C programming

Installation

Clone the repository:

git clone <your-repo-url>


Navigate to the project folder:

cd FacultyManagementSystem


Compile the program:

gcc faculty.c -o faculty


Run the program:

./faculty      # On Linux/Mac
faculty.exe    # On Windows

Usage

Add Faculty: Enter the faculty ID, name, department, and qualification.

View All Faculty: Displays all saved faculty records.

Search Faculty by ID: Search for a faculty member using their unique ID.

Exit: Close the program.

File Handling

All faculty data is stored in a text file faculty.txt.

Each record is saved in CSV format:

ID,Name,Department,Qualification

Code Structure

faculty.c – Main program file

faculty.txt – Stores faculty records (created automatically on program run)

Example Output
==== FACULTY MANAGEMENT SYSTEM ====
1. Add Faculty
2. View All Faculty
3. Search Faculty by ID
4. Exit
Enter your choice: 1

Enter Faculty ID: 101
Enter Faculty Name: John Doe
Enter Department: Computer Science
Enter Qualification: PhD

Faculty added successfully!

Contributing

Fork the repository.

Create a new branch (git checkout -b feature-name).

Commit your changes (git commit -m "Add some feature").

Push to the branch (git push origin feature-name).

Open a Pull Request.
