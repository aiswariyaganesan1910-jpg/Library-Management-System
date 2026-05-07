#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Book Class
class Book {
private:
    int bookID;
    string title;
    string author;
    bool issued;

public:
    Book(int id, string t, string a) {
        bookID = id;
        title = t;
        author = a;
        issued = false;
    }

    int getBookID() {
        return bookID;
    }

    string getTitle() {
        return title;
    }

    string getAuthor() {
        return author;
    }

    bool isIssued() {
        return issued;
    }

    void issueBook() {
        issued = true;
    }

    void returnBook() {
        issued = false;
    }

    void displayBook() {
        cout << "\nBook ID   : " << bookID;
        cout << "\nTitle     : " << title;
        cout << "\nAuthor    : " << author;
        cout << "\nStatus    : ";

        if (issued)
            cout << "Issued";
        else
            cout << "Available";

        cout << "\n---------------------------";
    }
};

// Member Class
class Member {
private:
    int memberID;
    string memberName;

public:
    Member(int id, string name) {
        memberID = id;
        memberName = name;
    }

    int getMemberID() {
        return memberID;
    }

    string getMemberName() {
        return memberName;
    }
};

// Library Class
class Library {
private:
    vector<Book> books;
    vector<Member> members;

public:

    // Add Book
    void addBook() {
        int id;
        string title, author;

        cout << "\nEnter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        books.push_back(Book(id, title, author));

        cout << "\nBook Added Successfully!\n";
    }

    // Add Member
    void addMember() {
        int id;
        string name;

        cout << "\nEnter Member ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Member Name: ";
        getline(cin, name);

        members.push_back(Member(id, name));

        cout << "\nMember Added Successfully!\n";
    }

    // Display Books
    void displayBooks() {
        if (books.empty()) {
            cout << "\nNo Books Available!\n";
            return;
        }

        cout << "\n===== Book List =====\n";

        for (int i = 0; i < books.size(); i++) {
            books[i].displayBook();
        }
    }

    // Issue Book
    void issueBook() {
        int id;

        cout << "\nEnter Book ID to Issue: ";
        cin >> id;

        for (int i = 0; i < books.size(); i++) {
            if (books[i].getBookID() == id) {

                if (books[i].isIssued()) {
                    cout << "\nBook is already issued!\n";
                }
                else {
                    books[i].issueBook();
                    cout << "\nBook Issued Successfully!\n";
                }

                return;
            }
        }

        cout << "\nBook Not Found!\n";
    }

    // Return Book
    void returnBook() {
        int id;

        cout << "\nEnter Book ID to Return: ";
        cin >> id;

        for (int i = 0; i < books.size(); i++) {
            if (books[i].getBookID() == id) {

                if (!books[i].isIssued()) {
                    cout << "\nBook was not issued!\n";
                }
                else {
                    books[i].returnBook();
                    cout << "\nBook Returned Successfully!\n";
                }

                return;
            }
        }

        cout << "\nBook Not Found!\n";
    }

    // Search by Title
    void searchByTitle() {
        string title;
        bool found = false;

        cin.ignore();

        cout << "\nEnter Book Title: ";
        getline(cin, title);

        for (int i = 0; i < books.size(); i++) {
            if (books[i].getTitle().find(title) != string::npos) {
                books[i].displayBook();
                found = true;
            }
        }

        if (!found) {
            cout << "\nBook Not Found!\n";
        }
    }

    // Search by Author
    void searchByAuthor() {
        string author;
        bool found = false;

        cin.ignore();

        cout << "\nEnter Author Name: ";
        getline(cin, author);

        for (int i = 0; i < books.size(); i++) {
            if (books[i].getAuthor().find(author) != string::npos) {
                books[i].displayBook();
                found = true;
            }
        }

        if (!found) {
            cout << "\nBook Not Found!\n";
        }
    }
};

// Main Function
int main() {

    Library library;

    int choice;

    do {
        cout << "\n\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Add Member";
        cout << "\n3. Display Books";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Search Book by Title";
        cout << "\n7. Search Book by Author";
        cout << "\n8. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            library.addBook();
            break;

        case 2:
            library.addMember();
            break;

        case 3:
            library.displayBooks();
            break;

        case 4:
            library.issueBook();
            break;

        case 5:
            library.returnBook();
            break;

        case 6:
            library.searchByTitle();
            break;

        case 7:
            library.searchByAuthor();
            break;

        case 8:
            cout << "\nExiting Library Management System...\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 8);

    return 0;
}