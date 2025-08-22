#include "../../include/Model/SinhVien.h"
#include <iostream>

using namespace std;

SinhVien::SinhVien() {}
SinhVien::SinhVien(string maSV, string hoTen, Date ngaySinh, string gioiTinh, string SDT, string lop, string khoa)
{
    this->maSV = maSV;
    this->hoTen = hoTen;
    this->ngaySinh = ngaySinh;
    this->gioiTinh = gioiTinh;
    this->SDT = SDT;
    this->lop = lop;
    this->khoa = khoa;
}

void SinhVien::setMaSV(string maSV) { this->maSV = maSV; }
void SinhVien::setHoTen(string hoTen) { this->hoTen = hoTen; }
void SinhVien::setNgaySinh(Date ngaySinh) { this->ngaySinh = ngaySinh; }
void SinhVien::setGioiTinh(string gioiTinh) { this->gioiTinh = gioiTinh; }
void SinhVien::setSDT(string SDT) { this->SDT = SDT; }
void SinhVien::setLop(string lop) { this->lop = lop; }
void SinhVien::setKhoa(string khoa) { this->khoa = khoa; }
void SinhVien::setNgayVaoKTX(Date ngayVaoTKX) { this->ngayVaoKTX = ngayVaoTKX; }
void SinhVien::setMaPhong(string maPhong) { this->maPhong = maPhong; }

string SinhVien::getMaSV() { return maSV; }
string SinhVien::getHoTen() { return hoTen; }
Date SinhVien::getNgaySinh() { return ngaySinh; }
string SinhVien::getGioiTinh() { return gioiTinh; }
string SinhVien::getSDT() { return SDT; }
string SinhVien::getLop() { return lop; }
string SinhVien::getKhoa() { return khoa; }
Date SinhVien::getNgayVaoKTX() { return ngayVaoKTX; }
string SinhVien::getMaPhong() { return maPhong; }
