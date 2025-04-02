// Author: Om Godage
// Date: 29/3/25
#include <simplecpp>

struct LinkedListNode {
    int val;
    LinkedListNode* next;
    
    LinkedListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

// Function to insert a node at the end of the linked list
void insertNode(LinkedListNode*& root, int val) {
    LinkedListNode* newNode = new LinkedListNode(val);
    if (!root) {
        root = newNode;
        return;
    }
    LinkedListNode* cur = root;
    while (cur->next)
        cur = cur->next;
    cur->next = newNode;
}

// Function to delete the entire linked list
void deleteList(LinkedListNode*& root) {
    while (root) {
        LinkedListNode* temp = root;
        root = root->next;
        delete temp;
    }
}

int main() {
    int n;
    cin >> n;
    LinkedListNode* root1 = nullptr;
    LinkedListNode* root2 = nullptr;

    // Read first n elements into root1
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertNode(root1, val);
    }

    // Read next n elements into root2
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertNode(root2, val);
    }

    // Print sum of corresponding nodes
    LinkedListNode* cur1 = root1;
    LinkedListNode* cur2 = root2;
    
    while (cur1 && cur2) {
        cout << (cur1->val + cur2->val) << " ";
        cur1 = cur1->next;
        cur2 = cur2->next;
    }
    cout << endl;

    // Free allocated memory
    deleteList(root1);
    deleteList(root2);

    return 0;
}