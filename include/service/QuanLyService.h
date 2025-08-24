#ifndef QUANLYSERVICE_H
#define QUANLYSERVICE_H

#include <iostream>
#include "../repository/QuanLyRepository.h"

using namespace std;

class QuanLyService
{
private:
    QuanLyRepository &qlRepository;

public:
    QuanLyService(QuanLyRepository &qlRepo) : qlRepository(qlRepo) {}
};

#endif