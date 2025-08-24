#ifndef QUANLYUI_H
#define QUANLYUI_H

#include <iostream>
#include "../service/QuanLyService.h"
using namespace std;

class QuanLyUI
{
private:
    QuanLyService &qlService;

public:
    QuanLyUI(QuanLyService &qlService) : qlService(qlService) {}
};

#endif