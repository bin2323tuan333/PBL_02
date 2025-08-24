#ifndef SINHVIEN_H
#define SINGVIEN_H

#include <iostream>
#include "../../lib/Date.h"

using namespace std;

class SinhVien
{
private:
    string maSV;
    string taiKhoanID;
    string hoTen;
    Date ngaySinh;
    string gioiTinh;
    string SDT;
    string lop;
    string khoa;
    string maPhong;
    Date ngayVaoKTX;

public:
    SinhVien();
    SinhVien(string maSV, string taiKhoanID, string hoTen, Date ngaySinh, string gioiTinh, string SDT, string lop, string khoa, string maPhong, Date ngayVaoKTX);

    void setMaSV(string maSV);
    void setHoTen(string hoTen);
    void setNgaySinh(Date ngaySinh);
    void setGioiTinh(string gioiTinh);
    void setSDT(string SDT);
    void setLop(string lop);
    void setKhoa(string khoa);
    void setNgayVaoKTX(Date ngayVaoTKX);
    void setMaPhong(string maPhong);

    string getMaSV();
    string getHoTen();
    Date getNgaySinh();
    string getGioiTinh();
    string getSDT();
    string getLop();
    string getKhoa();
    Date getNgayVaoKTX();
    string getMaPhong();
};

#endif