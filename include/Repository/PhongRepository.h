#include <iostream>
#include "../Model/Phong.h"
#include "../../lib/HashTable.h"

using namespace std;

class PhongRepository
{
private:
    const string filename = "../../Data/Phong.txt";
    HashTable<string, Phong> dsPhong;

public:
    void load(const string filename);
    void save(const string filename);

    Phong *findPhong(string maPhong);
};