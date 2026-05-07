# Library Management System

## Project Overview

The Library Management System is a console-based application developed using C++ and Object-Oriented Programming concepts. The project is designed to manage library operations such as adding books, managing members, issuing books, returning books, and searching books efficiently.

This system helps reduce manual work and provides a simple digital solution for maintaining library records.

---

## Objectives

- To implement a Library Management System using C++
- To apply Object-Oriented Programming concepts in a real-world application
- To manage books and members efficiently
- To provide issue and return functionalities
- To implement search operations based on title and author

---

## Features

- Add new books
- Add new members
- Display available books
- Issue books
- Return books
- Search books by title
- Search books by author
- Track issued and available books
- Menu-driven console interface

---

## Technologies Used

- Programming Language: C++
- Concepts Used:
  - Classes and Objects
  - Encapsulation
  - Vectors
  - Functions
  - Menu-Driven Programming

---

## System Requirements

- C++ Compiler (G++ / MinGW / Code::Blocks)
- Windows, Linux, or macOS
- Any code editor or IDE

---

## File Structure

```text
Library-Management-System-CPP/
│
├── library_management.cpp
└── README.md
```

---

## How to Run the Project

### Using Code::Blocks

1. Open Code::Blocks
2. Create a new C++ source file
3. Copy and paste the code into the file
4. Save the file as:
   ```text
   library_management.cpp
   ```
5. Click "Build and Run" or press `F9`

---

### Using VS Code

#### Compile the Program

```bash
g++ library_management.cpp -o library
```

#### Run the Program

##### Windows

```bash
library.exe
```

##### Linux/macOS

```bash
./library
```

---

## Sample Menu

```text
===== LIBRARY MANAGEMENT SYSTEM =====
1. Add Book
2. Add Member
3. Display Books
4. Issue Book
5. Return Book
6. Search Book by Title
7. Search Book by Author
8. Exit
```

---

## Sample Input

```text
Enter Book ID: 101
Enter Book Title: C++ Programming
Enter Author Name: Bjarne Stroustrup
```

---

## Sample Output

```text
Book Added Successfully!
```

---

## Limitations

- Data is not stored permanently
- No graphical user interface (GUI)
- No database integration
- No authentication system
- Fine calculation is not implemented
- Single-user access only

---

## Future Enhancements

- Add file handling or MySQL database
- Develop graphical user interface
- Add login authentication
- Implement fine calculation system
- Add due date tracking
- Generate library reports

---

## Conclusion

The Library Management System successfully demonstrates the implementation of Object-Oriented Programming concepts using C++. The project provides an efficient solution for managing library operations such as adding books, issuing books, returning books, and searching records through a simple console-based interface.

---

