#ifndef SINHVIENUI_H
#define SINHVIENUI_H

#include <iostream>
#include "../service/SinhVienService.h"
using namespace std;

class SinhVienUI
{
private:
    SinhVienService &svService;

public:
    SinhVienUI(SinhVienService &svService) : svService(svService) {}
};

#endif