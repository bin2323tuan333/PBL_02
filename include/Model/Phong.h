#ifndef PHONG_H
#define PHONG_H

#include <iostream>
using namespace std;

class Phong
{
private:
    string maPhong;
    string tenPhong;
    int tang;
    int soGiuong;
    int soNguoiHienTai;
    string loaiPhong;
    int giaPhong;
    string trangThai;
    string moTa;

public:
    Phong();
    Phong(string maPhong, int tang, int soGiuong, int soNguoiHienTai, string loaiPhong, int giaPhong, string trangThai, string moTa);

    void setMaPhong(string maPhong);
    void setTenPhong(string tenPhong);
    void setTang(int tang);
    void setSoGiuong(int soGiuong);
    void setSoNguoiHienTai(int soNguoiHienTai);
    void setLoaiPhong(string loaiPhong);
    void setGiaPhong(int giaPhong);
    void setTrangThai(string trangThai);
    void setMoTa(string moTa);

    string getMaPhong();
    string getTenPhong();
    int getTang();
    int getSoGiuong();
    int getSoNguoiHienTai();
    string getLoaiPhong();
    int getGiaPhong();
    string getTrangThai();
    string getMoTa();
};
#endif