#include <iostream>
#include <fstream>
#include "../../include/service/TaiKhoanService.h"

using namespace std;

TaiKhoan *TaiKhoanService::dangNhap(string taiKhoanID, string matKhau)
{
    TaiKhoan *tk = tkRepository.findTaiKhoan(taiKhoanID);
    if (tk != nullptr && tk->getMatKhau() == matKhau)
    {
        return tk;
    }
    return nullptr;
}