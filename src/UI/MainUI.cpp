#include <iostream>
#include <windows.h>
#include "../../include/ui/MainUI.h"

using namespace std;

void MainUI::showMenu()
{
    cout << "------------------------------------------------" << endl;
    cout << "   Chao mung den voi ung dung quan ly kTX  " << endl;
    cout << "------------------------------------------------" << endl;
    cout << "   1.Dang nhap" << endl;
    cout << "   2.Thoat" << endl;
    cout << "------------------------------------------------" << endl;
}

void MainUI::xulyMenu()
{
    int choice = 0;
    showMenu();
    cout << "Nhap lua chon cua ban: ";

    while (choice != 1 && choice != 2)
    {
        cin >> choice;
        system("cls");
        if (choice == 1)
            cout << "ban da chon 1" << endl;
        else if (choice == 2)
            cout << "Ban da thoat khoi chuong trinh..." << endl;
        else
        {
            showMenu();
            cout << "Lua chon khong hop le! Hay nhap lai: ";
        }
    }
}