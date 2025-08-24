#include "../model/TaiKhoan.h"
#include "../../lib/HashTable.h"

using namespace std;

class TaiKhoanRepository
{
private:
    HashTable<string, TaiKhoan> dsTaiKhoan;

public:
    TaiKhoanRepository();

    void load();
    void save();

    TaiKhoan *findTaiKhoan(string taiKhoanID);
    void add(TaiKhoan tk);
    void remove(string taiKhoanID);
};