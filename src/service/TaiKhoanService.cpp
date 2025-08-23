#include <iostream>
#include <fstream>
#include "../../include/service/TaiKhoanService.h"
#include "../../include/repository/TaiKhoanRepository.h"

using namespace std;

TaiKhoanService::TaiKhoanService(TaiKhoanRepository &tkRepository) : tkRepository(tkRepository) {}

bool TaiKhoanService::dangNhap(string taiKhoanID, string matKhau)
{
}