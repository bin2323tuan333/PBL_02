#ifndef TAIKHOANSERVICE_H
#define TAIKHOANSERVICE_H

#include <iostream>
#include "../repository/TaiKhoanRepository.h"

using namespace std;

class TaiKhoanService
{
private:
    TaiKhoanRepository &tkRepository;

public:
    TaiKhoanService(TaiKhoanRepository &tkRepository);
    bool dangNhap(string taiKhoanID, string matKhau);
};

#endif