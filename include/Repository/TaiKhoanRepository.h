#include "../model/TaiKhoan.h"
#include "../../lib/HashTable.h"

using namespace std;

class TaiKhoanRepository
{
private:
    const string filename = "../../Data/TaiKhoan.txt";
    HashTable<string, TaiKhoan> dsTaiKhoan;

public:
    void load();
    void save();

    TaiKhoan *findTaiKhoan(string taiKhoanID);
    void add(TaiKhoan tk);
    void remove(string taiKhoanID);
};