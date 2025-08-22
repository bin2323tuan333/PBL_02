#include <iostream>
#include "../model/SinhVien.h"
#include "../../lib/HashTable.h"

using namespace std;

class SinhVienRepository
{
private:
    const string filename = "../../Data/SinhVien.txt";
    HashTable<string, SinhVien> dsSinhVien;

public:
    void load(const string filename);
    void save(const string filename);

    SinhVien *findSinhVien(string maSV);
    void add(SinhVien sv);
    void remove(string maSV);
};