#include <iostream>
#include "../model/QuanLy.h"
#include "../../lib/HashTable.h"

using namespace std;

class QuanLyRepository
{
private:
    const string filename = "../../data/QuanLy.h";
    HashTable<string, QuanLy> dsQuanLy;

public:
    void load(const string filename);
    void save(const string filename);

    QuanLy *findQuanLy(string maQL);
    void add(QuanLy ql);
    void remove(string maQL);
};