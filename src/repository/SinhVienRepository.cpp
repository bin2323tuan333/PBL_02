#include <fstream>
#include <iostream>
#include <sstream>
#include "../../include/repository/SinhVienRepository.h"

SinhVienRepository::SinhVienRepository()
{
    load();
}

void SinhVienRepository::load()
{
    ifstream file("data/SinhVien.txt");
    if (!file.is_open())
    {
        cout << "File sinhvien cann't open!";
        exit(1);
        return;
    }
    string line;
    while (getline(file, line))
    {
        if (line.empty())
            continue;
        stringstream ss(line);
        string maSV, hoTen, gioiTinh, SDT, lop, khoa, taiKhoanID, maPhong, token;
        bool trangThai;
        int ngay, thang, nam;

        getline(ss, maSV, ';');
        getline(ss, taiKhoanID, ';');
        getline(ss, hoTen, ';');
        ss >> ngay >> token >> thang >> token >> nam >> token;
        Date ngaySinh(ngay, thang, nam);
        getline(ss, gioiTinh, ';');
        getline(ss, SDT, ';');
        getline(ss, lop, ';');
        getline(ss, khoa, ';');
        getline(ss, maPhong, ';');

        ss >> ngay >> token >> thang >> token >> nam;
        Date ngayVaoKTX(ngay, thang, nam);

        if (!taiKhoanID.empty())
        {
            SinhVien sv(maSV, taiKhoanID, hoTen, ngaySinh, gioiTinh, SDT, lop, khoa, maPhong, ngayVaoKTX);
            dsSinhVien.insert(taiKhoanID, sv);
        }
    }
}
void SinhVienRepository::save()
{
}

SinhVien *SinhVienRepository::findSinhVien(string maSV)
{
}
void SinhVienRepository::add(SinhVien sv)
{
}
void SinhVienRepository::remove(string maSV)
{
}