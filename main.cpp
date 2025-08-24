#include <iostream>
#include "include/ui/DangNhapUI.h"

using namespace std;

int main()
{
    TaiKhoanRepository tkRepo;
    TaiKhoanService tkService(tkRepo);
    DangNhapUI dnUI(tkService);

    TaiKhoan *tk = dnUI.dangNhap();
    if (tk == nullptr)
    {
        cout << "Dang nhap that bai hoac chon thoat.\n";
    }

    // 2. Kiểm tra role và điều hướng
    if ((tk->getTaiKhoanID())[3] == '0')
    {
        cout << "SV";
        // ShowStudentMenu(currentUser); // Menu dành cho sinh viên
    }
    else if ((tk->getTaiKhoanID())[3] == '1')
    {
        cout << "QL";
        // ShowManagerMenu(currentUser); // Menu dành cho quản lý
    }

    // 3. Sau khi Logout từ menu → quay lại vòng lặp đăng nhập
}

// g++ main.cpp lib/Date.cpp src/model/HoaDon.cpp src/model/Phong.cpp src/model/QuanLy.cpp src/model/SinhVien.cpp src/model/TaiKhoan.cpp src/repository/TaiKhoanRepository.cpp src/service/TaiKhoanService.cpp src/ui/DangNhapUI.cpp -o main.exe