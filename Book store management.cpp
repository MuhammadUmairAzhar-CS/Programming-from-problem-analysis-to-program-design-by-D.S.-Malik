#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string title, author;
    string name, password;
    string userType;
    int id = 0, quantity = 0;
    double price = 0;
    int choice = 0;
    int flag = 0;

    cout << "Enter your interface (Admin or User): ";
    cin >> userType;

    if (userType == "Admin") {
        cout << "Enter username: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;

        if (name == "UmairAzhar" && password == "UmairAzhar") {
            cout << " Welcome Admin." << endl;

     while (choice <= 3) {
      cout << endl;
      cout << "1. Add Book" << endl;
      cout << "2. View Book" << endl;
      cout << "3. Exit" << endl;
      cout << "Enter your choice: ";
      cin >> choice;

     if (choice == 1) {
     cout << "Enter Book ID: ";
      cin >> id;
     cin.ignore();

     cout << "Enter Book Title: ";
     getline(cin, title);

      cout << "Enter Author: ";
      getline(cin, author);

     cout << "Enter Price: ";
     cin >> price;

     cout << "Enter Quantity: ";
     cin >> quantity;

     flag = 1;
      cout << "Book added successfully." << endl;

     }else if (choice == 2) {
        if (flag == 1) {
             cout << "Book ID: " << id << endl;
             cout << "Title: " << title << endl;
             cout << "Author: " << author << endl;
             cout << "Price: " << price << endl;
             cout << "Quantity: " << quantity << endl;
     } else {
         cout << "No book added yet." << endl;  }
    }else if (choice == 3) {
         cout << "Exiting." << endl;
         break;
  }else {
         cout << "Invalid choice." << endl;
                }
             }
     }else {
        cout << "Invalid username or password." << endl;
        }
    }
    else if (userType == "User") {
        while (choice <= 3) {
            cout << endl;
            cout << "1. View Book" << endl;
            cout << "2. Buy Book" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

     if (choice == 1) {
     if (flag == 1) {
      cout << "Book ID: " << id << endl;
      cout << "Title: " << title << endl;
      cout << "Author: " << author << endl;
      cout << "Price: " << price << endl;
      cout << "Quantity: " << quantity << endl;
    } else {
      cout << "No books available. Please ask Admin to add books." << endl; }
    }else if (choice == 2) {
      if (flag == 0) {
            cout << "No book available. Please contact Admin." << endl;
    } else {
      int qty;
     cout << "Enter quantity to buy: ";
     cin >> qty;

     if (qty <= quantity && qty > 0) {
          double total = qty * price;
          cout << "Total Price: " << total << endl;
          cout << "Rounded Total: " << ceil(total) << endl;
          quantity -= qty;
          cout << "Purchase successful." << endl;
     } else {
         cout << "Invalid quantity or not enough stock." << endl;}
     }
     }else if (choice == 3) {
       cout << "Thank you for visiting." << endl;
           break;
     }else {
           cout << "Invalid choice." << endl;}
        }
    }else {
        cout << "Invalid interface. Please enter Admin or User." << endl;
    }

    return 0;
}
