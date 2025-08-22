#include <iostream>
#include "../../include/Model/Phong.h"
using namespace std;

Phong::Phong() {}
Phong::Phong(string maPhong, int tang, int soGiuong, int soNguoiHienTai, string loaiPhong, int giaPhong, string trangThai, string moTa)
{
    this->maPhong = maPhong;
    this->tang = tang;
    this->soGiuong = soGiuong;
    this->soNguoiHienTai = soNguoiHienTai;
    this->loaiPhong = loaiPhong;
    this->giaPhong = giaPhong;
    this->trangThai = trangThai;
    this->moTa = moTa;
}

void Phong::setMaPhong(string maPhong) { this->maPhong = maPhong; }
void Phong::setTenPhong(string tenPhong) { this->tenPhong = tenPhong; }
void Phong::setTang(int tang) { this->tang = tang; }
void Phong::setSoGiuong(int soGiuong) { this->soGiuong = soGiuong; }
void Phong::setSoNguoiHienTai(int soNguoiHienTai) { this->soNguoiHienTai = soNguoiHienTai; }
void Phong::setLoaiPhong(string loaiPhong) { this->loaiPhong = loaiPhong; }
void Phong::setGiaPhong(int giaPhong) { this->giaPhong = giaPhong; }
void Phong::setTrangThai(string trangThai) { this->trangThai = trangThai; }
void Phong::setMoTa(string moTa) { this->moTa = moTa; }

string Phong::getMaPhong() { return this->maPhong; }
string Phong::getTenPhong() { return this->tenPhong; }
int Phong::getTang() { return this->tang; }
int Phong::getSoGiuong() { return this->soGiuong; }
int Phong::getSoNguoiHienTai() { return this->soNguoiHienTai; }
string Phong::getLoaiPhong() { return this->loaiPhong; }
int Phong::getGiaPhong() { return this->giaPhong; }
string Phong::getTrangThai() { return this->trangThai; }
string Phong::getMoTa() { return this->moTa; }
