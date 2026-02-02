// PROGRAM 4: Johnny's Restaurant - Single Item Selection
// C++ Program for restaurant billing with single item selection and 5% tax

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct menuItemType {
    string itemName;
    double price;
};

void getData(menuItemType menuList[]);
void showMenu(const menuItemType menuList[]);
void printCheck(const menuItemType menuList[]);

int main() {
    menuItemType menuList[8];
    
    getData(menuList);
    showMenu(menuList);
    printCheck(menuList);
    
    return 0;
}

void getData(menuItemType menuList[]) {
    menuList[0] = {"Plain Egg", 1.45};
    menuList[1] = {"Bacon and Egg", 2.45};
    menuList[2] = {"Muffin", 0.99};
    menuList[3] = {"French Toast", 1.99};
    menuList[4] = {"Fruit Basket", 2.49};
    menuList[5] = {"Cereal", 0.69};
    menuList[6] = {"Coffee", 0.50};
    menuList[7] = {"Tea", 0.75};
}

void showMenu(const menuItemType menuList[]) {
    cout << "Welcome to Johnny's Restaurant" << endl;
    cout << "Available items:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << (i + 1) << ". " << menuList[i].itemName << " $" 
             << fixed << setprecision(2) << menuList[i].price << endl;
    }
    cout << "Enter your selection (1-8): ";
}

void printCheck(const menuItemType menuList[]) {
    int choice;
    cin >> choice;
    choice--;
    
    double subtotal = menuList[choice].price;
    double tax = subtotal * 0.05;
    double total = subtotal + tax;
    
    cout << fixed << setprecision(2);
    cout << "\nWelcome to Johnny's Restaurant" << endl;
    cout << menuList[choice].itemName << " $" << setw(6) << subtotal << endl;
    cout << "Tax $" << setw(6) << tax << endl;
    cout << "Amount Due $" << total << endl;
}
