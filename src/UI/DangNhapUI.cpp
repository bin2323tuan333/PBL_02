#include <iostream>
#include "../../include/ui/DangNhapUI.h"
using namespace std;

string DangNhapUI::getUser() { return this->user; }
string DangNhapUI::getPass() { return this->pass; }

void DangNhapUI::dangNhap()
{
    cout << "Nhap ten dang nhap: ";
    getline(cin, this->user);
    cout << "Nhap mat khau: ";
    getline(cin, this->pass);
}
