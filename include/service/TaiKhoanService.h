#ifndef TAIKHOANSERVICE_H
#define TAIKHOANSERVICE_H

#include <iostream>
#include "../model/TaiKhoan.h"
#include "../repository/TaiKhoanRepository.h"

using namespace std;

class TaiKhoanService
{
private:
    TaiKhoanRepository &tkRepository;

public:
    TaiKhoanService(TaiKhoanRepository &tkRepo) : tkRepository(tkRepo) {}
    TaiKhoan *dangNhap(string taiKhoanID, string matKhau);
};

#endif