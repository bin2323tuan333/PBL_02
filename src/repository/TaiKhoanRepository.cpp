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

void TaiKhoanRepository::save(const string filename)
{
    ofstream file(filename);
    if (!file.is_open())
    {
        cout << "Khong the mo file!" << endl;
        return;
    }

    for (int i = 0; i < dsTaiKhoan.getSize(); i++)
    {
        HashNode<string, TaiKhoan> *tmpNode = dsTaiKhoan.getHead(i);
        while (tmpNode != nullptr)
        {
            file << tmpNode->value.getTaiKhoanID() << ";"
                 << tmpNode->value.getTenDangNhap() << ";"
                 << tmpNode->value.getMatKhau() << ";"
                 << tmpNode->value.getEmail() << ";"
                 << (tmpNode->value.getNgayTao()).getYear() << "-" << (tmpNode->value.getNgayTao()).getMonth() << "-" << (tmpNode->value.getNgayTao()).getDay() << ";"
                 << tmpNode->value.getTrangThai() << endl;
            tmpNode = tmpNode->next;
        }
    }
}

void TaiKhoanRepository::add(TaiKhoan tk)
{
    TaiKhoan *taiKhoanInsert = dsTaiKhoan.search(tk.getTaiKhoanID());
    dsTaiKhoan.insert(tk.getTaiKhoanID(), *taiKhoanInsert);
}

void TaiKhoanRepository::remove(string taiKhoanID)
{
    dsTaiKhoan.remove(taiKhoanID);
}