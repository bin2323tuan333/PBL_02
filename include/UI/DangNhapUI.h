#ifndef DANGNHAPUI_H
#define DANGNHAPUI_H

#include <iostream>
using namespace std;

class DangNhapUI
{
private:
    string user, pass;

public:
    string getUser();
    string getPass();

    void dangNhap();
};

#endif
