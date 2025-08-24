#include <iostream>
#include "../../include/ui/DangNhapUI.h"
using namespace std;

TaiKhoan *DangNhapUI::dangNhap()
{
    string username, password;
    cout << "=== DANG NHAP ===\n";
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    TaiKhoan *tk = tkService.dangNhap(username, password);
    if (tk->getTaiKhoanID() == "")
    {
        cout << "Dang nhap that bai!\n";
    }
    else
    {
        cout << "Xin chao " << tk->getTenDangNhap() << "\n";
    }
    return tk;
}