#include <iostream>
#include <fstream>
#include <sstream>
#include "../../include/repository/TaiKhoanRepository.h"

void TaiKhoanRepository::load(const string filename)
{
    ifstream file(filename);
    if (!file.is_open())
    {
        cout << "Khong the mo file!" << endl;
        return;
    }
    string line;
    while (getline(file, line))
    {
        if (line.empty())
            continue;
        stringstream ss(line);
        string taiKhoanID, tenDangNhap, matKhau, email, token;
        bool trangThai;
        int ngay, thang, nam;

        getline(ss, taiKhoanID, ';');
        getline(ss, tenDangNhap, ';');
        getline(ss, matKhau, ';');
        getline(ss, email, ';');
        getline(ss, token, ';');
        ss >> nam >> token >> thang >> token >> ngay >> token >> trangThai;
        Date ngayTao(ngay, thang, nam);

        if (!taiKhoanID.empty() && !matKhau.empty())
        {
            TaiKhoan tk;
            tk.setTaiKhoanID(taiKhoanID);
            tk.setTenDangNhap(tenDangNhap);
            tk.setMatKhau(matKhau);
            tk.setEmail(email);
            tk.setNgayTao(ngayTao);
            tk.setTrangThai(trangThai);

            dsTaiKhoan.insert(taiKhoanID, tk);
        }
    }
}