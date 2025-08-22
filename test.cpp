#include <bits/stdc++.h>
using namespace std;

class Date
{
public:
    int ngay, thang, nam;
};

int main()
{
    string taiKhoanID, tenDangNhap, matKhau, email, token;
    Date ngayTao;
    bool trangThai;
    string line = "TK102;qlhieu;123456;lehieu@ktx.com;2021-06-01;1";
    stringstream ss(line);
    getline(ss, taiKhoanID, ';');
    getline(ss, tenDangNhap, ';');
    getline(ss, matKhau, ';');
    getline(ss, email, ';');
    ss >> ngayTao.nam >> token >> ngayTao.thang >> token >> ngayTao.ngay >> token >> trangThai;

    return 0;
}