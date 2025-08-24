#include <iostream>
#include "include/ui/DangNhapUI.h"

using namespace std;

int main()
{
    TaiKhoanRepository tkRepo;
    TaiKhoanService tkService(tkRepo);
    DangNhapUI dnUI(tkService);
    int isRunning = 1;

    while (isRunning)
    {
        TaiKhoan *tk = dnUI.dangNhap();
        if (tk->getTenDangNhap() == "")
        {
            cout << "Dang nhap that bai hoac chon thoat.\n";
            isRunning = false;
            continue;
        }
        cout << tk->getTenDangNhap() << endl;
        // 2. Kiểm tra role và điều hướng
        // if (currentUser.role == "student")
        // {
        //     ShowStudentMenu(currentUser); // Menu dành cho sinh viên
        // }
        // else if (currentUser.role == "manager")
        // {
        //     ShowManagerMenu(currentUser); // Menu dành cho quản lý
        // }

        // 3. Sau khi Logout từ menu → quay lại vòng lặp đăng nhập
    }
    return 0;
}

// g++ main.cpp lib/Date.cpp src/model/HoaDon.cpp src/model/Phong.cpp src/model/QuanLy.cpp src/model/SinhVien.cpp src/model/TaiKhoan.cpp src/repository/TaiKhoanRepository.cpp src/service/TaiKhoanService.cpp src/ui/DangNhapUI.cpp -o main.exe