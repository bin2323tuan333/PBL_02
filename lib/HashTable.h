#ifndef HASHTABLE_H
#define HASHTABLE_H

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
    static const int DEFAULT_SIZE = 307;
    HashNode<Key, Value> **T;
    int size;

public:
    HashTable();
    ~HashTable();

    int hashFunction(const Key &key);
    int getSize();
    HashNode<Key, Value> *getHead(const Key &key);
    void insert(const Key &key, const Value &value);
    Value *search(const Key &key);
    bool remove(const Key &key);
};

#endif

template <typename Key, typename Value>
int HashTable<Key, Value>::hashFunction(const Key &key)
{
    int hash = 0;
    for (char c : key)
    {
        hash = (hash * 31 + c) % DEFAULT_SIZE;
    }
    return hash;
}

template <typename Key, typename Value>
HashTable<Key, Value>::HashTable()
{
    size = DEFAULT_SIZE;
    T = new HashNode<Key, Value> *[size];
    for (int i = 0; i < size; i++)
    {
        T[i] = nullptr;
    }
}

template <typename Key, typename Value>
HashTable<Key, Value>::~HashTable()
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

template <typename Key, typename Value>
int HashTable<Key, Value>::getSize()
{
    return this->DEFAULT_SIZE;
}

template <typename Key, typename Value>
HashNode<Key, Value> *HashTable<Key, Value>::getHead(const Key &key)
{
    int idx = hashFunction(key);
    return T[idx];
}

template <typename Key, typename Value>
void HashTable<Key, Value>::insert(const Key &key, const Value &value)
{
    int idx = hashFunction(key);
    HashNode<Key, Value> *newNode = new HashNode<Key, Value>(key, value);

    newNode->next = T[idx];
    T[idx] = newNode;
}

template <typename Key, typename Value>
Value *HashTable<Key, Value>::search(const Key &key)
{
    HashNode<Key, Value> *entry = getHead(key);
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

template <typename Key, typename Value>
bool HashTable<Key, Value>::remove(const Key &key)
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