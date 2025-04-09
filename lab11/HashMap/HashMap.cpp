#include "HashMap.h"

HashMap::HashMap()
{
    table = vector<LinkedListNode *>(groups, nullptr);
}

// tells whether the hashmap is empty or not
// counts the number of elements stored in the map
// and if it is zero, you return true, else return false
bool HashMap::isEmpty()
{
    int sum = 0;
    for (LinkedListNode *cur : table)
    {
        while (cur)
        {
            sum++;
            cur = cur->next;
        }
    }

    return sum == 0;
}

// hash function takes a string key, and assigns it an index
// in the table
int HashMap::hash(string key)
{
    int chsum = 0;
    for (char c : key)
        chsum += c;

    return chsum % groups;
}

void HashMap::insert(string key, int value)
{
    int hashValue = hash(key);
    LinkedListNode *cur = table[hashValue];
    bool keyExists = false;
    // code same as inserting in a linked list, see lab 10 solution
    if (!cur)
    {
        table[hashValue] = new LinkedListNode;
        cur = table[hashValue];
        cur->name = key;
        cur->value = value;
        cur->next = nullptr;
        return;
    }
    // this is the case where the key already exists 
    // in the hash map 
    // then u will just update the previous value stored in the linked list
    else if (cur->name == key)
    {
        keyExists = true;
        cur->value = value;
    }
    // code same as inserting in a linked list, see lab 10 solution
    else
    {
        while (cur->next)
        {
            cur = cur->next;
            if (cur->name == key)
            {
                cur->value = value;
                keyExists = true;
                break;
            }
        }
    }

    if (!keyExists)
    {
        cur->next = new LinkedListNode;
        cur = cur->next;
        cur->name = key;
        cur->value = value;
        cur->next = nullptr;
    }
}

void HashMap::remove(string key)
{
    int hashValue = hash(key);
    LinkedListNode *cur = table[hashValue];
    if (cur)
    {
        if (cur->name == key)
        {
            table[hashValue] = cur->next;
            delete cur;
        }
        else
        {
            while (cur->next)
            {
                if (cur->next->name == key)
                {
                    LinkedListNode* del = cur->next;
                    cur->next = cur->next->next;
                    delete del;
                    break;
                }
                cur = cur->next;
            }
        }
    }

}

void HashMap::printTable()
{
    for (int i = 0; i < groups; i++)
    {
        if (!table[i])
            continue;

        LinkedListNode *cur = table[i];
        while (cur)
        {
            cout << "Key: " << cur->name << ", Value: " << cur->value << endl;
            cur = cur->next;
        }
    }
}
