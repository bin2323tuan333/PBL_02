#include <iostream>
#include "../include/Model/TaiKhoan.h"

using namespace std;

template <typename Key, typename Value>
class HashNode
{
public:
    Key key;
    Value value;
    HashNode *next;

    HashNode(Key k, Value v) : key(k), value(v), next(nullptr) {}
};

template <typename Key, typename Value>
class HashTable
{
private:
    static const int DEFAULT_SIZE = 1009;
    HashNode<Key, Value> **T;
    int size;

    int hashFunction(const Key &key)
    {
        int hash = 0;
        for (char c : key)
        {
            hash = (hash * 31 + c) % DEFAULT_SIZE;
        }
        return hash;
    }

public:
    HashTable()
    {
        size = DEFAULT_SIZE;
        T = new HashNode<Key, Value> *[size];
        for (int i = 0; i < size; i++)
        {
            T[i] = nullptr;
        }
    }

    ~HashTable()
    {
        for (int i = 0; i < size; i++)
        {
            HashNode<Key, Value> *entry = T[i];
            while (entry != nullptr)
            {
                HashNode<Key, Value> *prev = entry;
                entry = entry->next;
                delete prev;
            }
        }
        delete[] T;
    }

    // Insert
    void insert(const Key &key, const Value &value)
    {
        int idx = hashFunction(key);
        HashNode<Key, Value> *newNode = new HashNode<Key, Value>(key, value);

        newNode->next = T[idx];
        T[idx] = newNode;
    }

    // Search
    Value *search(const Key &key)
    {
        int idx = hashFunction(key);
        HashNode<Key, Value> *entry = T[idx];
        while (entry != nullptr)
        {
            if (entry->key == key)
            {
                return &(entry->value);
            }
            entry = entry->next;
        }
        return nullptr;
    }

    // Remove
    bool remove(const Key &key)
    {
        int idx = hashFunction(key);
        HashNode<Key, Value> *entry = T[idx];
        HashNode<Key, Value> *prev = nullptr;

        while (entry != nullptr)
        {
            if (entry->key == key)
            {
                if (prev == nullptr)
                {
                    T[idx] = entry->next;
                }
                else
                {
                    prev->next = entry->next;
                }
                delete entry;
                return true;
            }
            prev = entry;
            entry = entry->next;
        }
        return false;
    }
};
