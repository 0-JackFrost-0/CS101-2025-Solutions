// Author: Om Godage
// Date: 28/3/25
#ifndef HASHMAP_H
#define HASHMAP_H

#include <iostream>
#include <vector>
using namespace std;

// Node structure for linked list to handle collisions
struct LinkedListNode
{
    int value;
    string name;
    LinkedListNode *next;
};

// HashMap structure using separate chaining for collision handling
struct HashMap
{
    const int groups = 10; // Number of buckets in hash table
    vector<LinkedListNode *> table;

    HashMap();

    bool isEmpty();

    int hash(string key);

    void insert(string key, int value);
   
    void printTable();

    void remove(string key);
};

#endif // HASHMAP_H