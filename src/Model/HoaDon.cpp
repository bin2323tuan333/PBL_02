#include "../../include/model/HoaDon.h"
#include <iostream>
using namespace std;

HoaDon::HoaDon() {}

void HoaDon::setMaHoaDon(string maHoaDon) { this->maHoaDon = maHoaDon; }
void HoaDon::setThang(int thang) { this->thang = thang; }
void HoaDon::setNam(int nam) { this->nam = nam; }
void HoaDon::setTienPhong(int tienPhong) { this->tienPhong = tienPhong; }
void HoaDon::setTienDien(int tienDien) { this->tienDien = tienDien; }
void HoaDon::setTienNuoc(int tienNuoc) { this->tienNuoc = tienNuoc; }
void HoaDon::setTienInternet(int tienInternet) { this->tienInternet = tienInternet; }
void HoaDon::setTienKhac(int tienKhac) { this->tienKhac = tienKhac; }
void HoaDon::setNgayTao(Date ngayTao) { this->ngayTao = ngayTao; }
void HoaDon::setNgayDong(Date ngayDong) { this->ngayDong = ngayDong; }
void HoaDon::setTrangThaiThanhToan(string trangThaiThanhToan) { this->trangThaiThanhToan = trangThaiThanhToan; }
void HoaDon::setMaSinhVien(string maSinhVien) { this->maSinhVien = maSinhVien; }
void HoaDon::setMaQuanLy(string maQuanLy) { this->maQuanLy = maQuanLy; }

string HoaDon::getMaHoaDon() { return this->maHoaDon; }
int HoaDon::getThang() { return this->thang; }
int HoaDon::getNam() { return this->nam; }
int HoaDon::getTienPhong() { return this->tienPhong; }
int HoaDon::getTienNuoc() { return this->tienNuoc; }
int HoaDon::getTienDien() { return this->tienDien; }
int HoaDon::getTienInternet() { return this->tienInternet; }
int HoaDon::getTienKhac() { return this->tienKhac; }
Date HoaDon::getNgayTao() { return this->ngayTao; }
Date HoaDon::getNgayDong() { return this->ngayDong; }
string HoaDon::getTrangThaiThanhToan() { return this->trangThaiThanhToan; }
string HoaDon::getMaSinhVien() { return this->maSinhVien; }
string HoaDon::getMaQuanLy() { return this->maQuanLy; }
