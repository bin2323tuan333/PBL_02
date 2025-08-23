#include <iostream>
#include "include/model/TaiKhoan.h"
#include "include/ui/DangNhapUI.h"
#include "include/service/TaiKhoanService.h"
#include "include/repository/TaiKhoanRepository.h"

using namespace std;

int main()
{
    TaiKhoanRepository tkRepo;
    TaiKhoanService tkService(tkRepo);
    DangNhapUI dnUI(tkService);
    int isRunning = 1;

    while (isRunning)
    {
        TaiKhoan tk = dnUI.dangNhap();
        if (tk.getTenDangNhap() == "")
        {
            cout << "Dang nhap that bai hoac chon thoat.\n";
            isRunning = false;
            continue;
        }

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