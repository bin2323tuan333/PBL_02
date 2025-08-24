#ifndef SINHVIENSERVICE_H
#define SINHVIENSERVICE_H

#include <iostream>
#include "../repository/SinhVienRepository.h"

using namespace std;

class SinhVienService
{
private:
    SinhVienRepository &svRepository;

public:
    SinhVienService(SinhVienRepository &svRepo) : svRepository(svRepo) {}
};

#endif