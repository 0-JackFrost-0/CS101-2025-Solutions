// Author: Om Godage
// Date: 29/3/25

// This solution is not required for the question, you can simply check if the last node is pointing to some index k <= n
// and k >= 0, then there is a cycle, else there's no cycle (if k is -1) 

#include <iostream>
using namespace std;

struct LinkedListNode {
    int val;
    LinkedListNode* next;
    LinkedListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

// Function to detect a cycle using Floyd’s Cycle Detection Algorithm
bool isCycle(LinkedListNode* head) {
    if (!head || !head->next) return false;

    LinkedListNode* slow = head;
    LinkedListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) return true; // Cycle detected
    }

    return false; // No cycle
}

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "NO" << endl;
        return 0;
    }

    LinkedListNode* head = nullptr;
    LinkedListNode* tail = nullptr;
    LinkedListNode* cycleEntry = nullptr;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;

        LinkedListNode* newNode = new LinkedListNode(val);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        if (i == 0) cycleEntry = head; // Store first node
    }

    int pos;
    cin >> pos;

    if (pos >= 0) {
        LinkedListNode* temp = head;
        for (int i = 0; i < pos; i++)
            temp = temp->next;
        tail->next = temp; // Create cycle
    }

    cout << (isCycle(head) ? "YES" : "NO") << endl;

    return 0;
}