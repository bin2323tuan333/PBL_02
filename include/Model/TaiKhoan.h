#ifndef TAIKHOAN_H
#define TAIKHOAN_H

#include <iostream>
#include "../../lib/Date.h"

using namespace std;

class TaiKhoan
{
private:
    string taiKhoanID;
    string tenDangNhap;
    string matKhau;
    string email;
    Date ngayTao;
    bool trangThai;

public:
    TaiKhoan();
    TaiKhoan(string taiKhoanID, string tenDangNhap, string matKhau);

    void setTaiKhoanID(string taiKhoanID);
    void setTenDangNhap(string tenDangNhap);
    void setMatKhau(string matKhau);
    void setEmail(string email);
    void setNgayTao(Date ngayTao);
    void setTrangThai(bool trangThai);

    string getTaiKhoanID();
    string getTenDangNhap();
    string getMatKhau();
    string getEmail();
    Date getNgayTao();
    bool getTrangThai();
};

#endif