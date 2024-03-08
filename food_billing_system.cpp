#include <iostream>
using namespace std;

int TotalBillAmount();

int main() {
    int totalBill = TotalBillAmount();
    cout << "Total Bill Amount: Rs" << totalBill << endl;
    return 0;
}

int TotalBillAmount() {
    char c;
    int BillAmount = 0; // Initialize BillAmount
    char TypeOfItem;
    char s;
    
    cout << "----------Welcome to our restaurant----------" << endl;
    cout << "We provide veg and Non veg recipes." << endl;
    cout << "---------please press 'S' to start your order-----------" << endl;

    start:
    cin >> c;
    if (c == 's' || c == 'S') {
        choice:
        cout << "please select the type of item." << endl;
        cout << "Select A for veg and B for Non veg." << endl;
        cout << "(a)veg     (b)Non veg" << endl;
        cin >> TypeOfItem;
        if (TypeOfItem == 'a' || TypeOfItem == 'A') {
            orders:
            cout << "enter the Item number you want to buy." << endl;
            cout << "1.paneer butter masala--Rs180" << endl;
            cout << "2.tandoori Roti--Rs30" << endl;
            cout << "3.veg biryani--Rs200" << endl;
            cout << "4.veg fried Rice--Rs160" << endl;
            int Item;
            cin >> Item;
            switch (Item) {
                case 1:
                    BillAmount += 180;
                    break;
                case 2:
                    BillAmount += 30;
                    break;
                case 3:
                    BillAmount += 200;
                    break;
                case 4:
                    BillAmount += 160;
                    break;
                default:
                    cout << "Enter correct choice of above items." << endl;
            }
            cout << "Do you want to buy another Item Y or N:" << endl;
            AnotherItem:
            cin >> s;
            if (s == 'Y' || s == 'y') {
                goto orders;
            }
            else if (s == 'N' || s == 'n') {
                return BillAmount;
            }
            else {
                cout << "Enter correct Y or N" << endl;
                goto AnotherItem;
            }
        }
        else if (TypeOfItem == 'b' || TypeOfItem == 'B') {
            Items:
            cout << "enter the Item number you want to buy." << endl;
            cout << "1.Fish curry--Rs120" << endl;
            cout << "2.chicken manchurya--Rs100" << endl;
            cout << "3.hyd chicken biryani--Rs280" << endl;
            cout << "4.Egg fried Rice--Rs180" << endl;
            int order;
            cin >> order;
            switch (order) {
                case 1:
                    BillAmount += 120;
                    break;
                case 2:
                    BillAmount += 100;
                    break;
                case 3:
                    BillAmount += 280;
                    break;
                case 4:
                    BillAmount += 180;
                    break;
                default:
                    cout << "Enter correct choice of above items." << endl;
            }
            cout << "Do you want to buy another Item Y or N:" << endl;
            cin >> s;
            if (s == 'Y' || s == 'y') {
                goto Items;
            }
            else {
                return BillAmount;
            }
        }
        else {
            cout << "Enter your choice again, please press a or b." << endl;
            goto choice;
        }
    }
    else {
        cout << "Enter correct character again, please press char S." << endl;
        goto start;
    }
}
