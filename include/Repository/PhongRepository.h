#include <iostream>
#include "../model/Phong.h"
#include "../../lib/HashTable.h"

using namespace std;

class PhongRepository
{
private:
    HashTable<string, Phong> dsPhong;

public:
    void load(const string filename);
    void save(const string filename);

    Phong *findPhong(string maPhong);
};