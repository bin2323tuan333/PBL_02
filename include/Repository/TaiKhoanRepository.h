#include "../model/TaiKhoan.h"
#include "../../lib/HashTable.h"

using namespace std;

class TaiKhoanRepository
{
private:
    const string filename = "../../Data/TaiKhoan.txt";
    HashTable<string, TaiKhoan> dsTaiKhoan;

public:
    void load(const string filename);
    void save(const string filename);

    TaiKhoan *findTaiKhoan(string taiKhoanID);
    void add(TaiKhoan tk);
    void remove(string taiKhoanID);
};