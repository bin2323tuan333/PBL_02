#include <iostream>
#include "../../include/Model/QuanLy.h"

using namespace std;

QuanLy::QuanLy() {}
QuanLy::QuanLy(string hoTen, Date ngaySinh, string gioiTinh, string SDT, string chucVu)
{
    this->hoTen = hoTen;
    this->ngaySinh = ngaySinh;
    this->gioiTinh = gioiTinh;
    this->SDT = SDT;
    this->chucVu = chucVu;
}
void QuanLy::setHoTen(string hoTen) { this->hoTen = hoTen; }
void QuanLy::setNgaySinh(Date ngaySinh) { this->ngaySinh = ngaySinh; }
void QuanLy::setGioiTinh(string gioiTinh) { this->gioiTinh = gioiTinh; }
void QuanLy::setSDT(string sdt) { this->SDT = sdt; }
void QuanLy::setChucVu(string chucVu) { this->chucVu = chucVu; }

string QuanLy::getHoTen() { return hoTen; }
Date QuanLy::getNgaySinh() { return ngaySinh; }
string QuanLy::getGioiTinh() { return gioiTinh; }
string QuanLy::getSDT() { return SDT; }
string QuanLy::getChucVu() { return chucVu; }
