#include "../../include/Model/TaiKhoan.h"

TaiKhoan::TaiKhoan() {}
TaiKhoan::TaiKhoan(string taiKhoanID, string tenDangNhap, string matKhau)
{
    this->taiKhoanID = taiKhoanID;
    this->tenDangNhap = tenDangNhap;
    this->matKhau = matKhau;
}

void TaiKhoan::setTaiKhoanID(string taiKhoanID) { this->taiKhoanID = taiKhoanID; }
void TaiKhoan::setTenDangNhap(string tenDangNhap) { this->tenDangNhap = tenDangNhap; }
void TaiKhoan::setMatKhau(string matKhau) { this->matKhau = matKhau; }
void TaiKhoan::setEmail(string email) { this->email = email; }
void TaiKhoan::setNgayTao(Date ngayTao) { this->ngayTao = ngayTao; }
void TaiKhoan::setTrangThai(bool trangThai) { this->trangThai = trangThai; }

string TaiKhoan::getTaiKhoanID() { return taiKhoanID; }
string TaiKhoan::getTenDangNhap() { return tenDangNhap; }
string TaiKhoan::getMatKhau() { return matKhau; }
string TaiKhoan::getEmail() { return email; }
Date TaiKhoan::getNgayTao() { return ngayTao; }
bool TaiKhoan::getTrangThai() { return trangThai; }
