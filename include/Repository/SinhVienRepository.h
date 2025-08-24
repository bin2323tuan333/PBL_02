#include "../model/SinhVien.h"
#include "../../lib/HashTable.h"

using namespace std;

class SinhVienRepository
{
private:
    HashTable<string, SinhVien> dsSinhVien;

public:
    SinhVienRepository();

    void load();
    void save();

    SinhVien *findSinhVien(string maSV);
    void add(SinhVien sv);
    void remove(string maSV);
};