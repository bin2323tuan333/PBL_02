#ifndef DANGNHAPUI_H
#define DANGNHAPUI_H

#include <iostream>
#include "../model/TaiKhoan.h"
#include "../service/TaiKhoanService.h"
using namespace std;

class DangNhapUI
{
private:
    TaiKhoanService &tkService;

public:
    DangNhapUI(TaiKhoanService &service) : tkService(service) {}
    TaiKhoan dangNhap();
};

#endif
