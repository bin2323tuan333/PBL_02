#ifndef HOADON_H
#define HOADON_H

#include <iostream>
#include "../../lib/Date.h"
using namespace std;

class HoaDon
{
private:
    string maHoaDon;
    int thang;
    int nam;
    int tienPhong;
    int tienDien;
    int tienNuoc;
    int tienInternet;
    int tienKhac;
    Date ngayTao;
    Date ngayDong;
    string trangThaiThanhToan;
    string maSinhVien;
    string maQuanLy;

public:
    HoaDon();

    void setMaHoaDon(string maHoaDon);
    void setThang(int thang);
    void setNam(int nam);
    void setTienPhong(int tienPhong);
    void setTienDien(int tienDien);
    void setTienNuoc(int tienNuoc);
    void setTienInternet(int tienInternet);
    void setTienKhac(int tienKhac);
    void setNgayTao(Date ngayTao);
    void setNgayDong(Date ngayDong);
    void setTrangThaiThanhToan(string trangThaiThanhToan);
    void setMaSinhVien(string maSinhVien);
    void setMaQuanLy(string maQuanLy);

    string getMaHoaDon();
    int getThang();
    int getNam();
    int getTienPhong();
    int getTienDien();
    int getTienNuoc();
    int getTienInternet();
    int getTienKhac();
    Date getNgayTao();
    Date getNgayDong();
    string getTrangThaiThanhToan();
    string getMaSinhVien();
    string getMaQuanLy();
};

#endif