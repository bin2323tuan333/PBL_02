#ifndef QUANLY_H
#define QUANLY_H

#include <iostream>
#include "../../lib/Date.h"
#include "SinhVien.h"
#include "Phong.h"
#include "HoaDon.h"

using namespace std;

class QuanLy
{
private:
    string maQL;
    string hoTen;
    Date ngaySinh;
    string gioiTinh;
    string SDT;
    string chucVu;
    string taiKhoanID;

public:
    QuanLy();
    QuanLy(string hoTen, Date NgaySinh, string gioiTinh, string SDT, string chucVu);

    void setMaQL(string maQL);
    void setHoTen(string hoTen);
    void setNgaySinh(Date ngaySinh);
    void setGioiTinh(string gioiTinh);
    void setSDT(string sdt);
    void setChucVu(string chucVu);
    void setTaiKhoanID(string taiKhoanID);

    string getMaQL();
    string getHoTen();
    Date getNgaySinh();
    string getGioiTinh();
    string getSDT();
    string getChucVu();
    string getTaiKhoanID();
};

#endif