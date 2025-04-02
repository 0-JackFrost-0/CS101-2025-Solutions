// Author: Om Godage
// Date: 29/3/25
#include<simplecpp>

// standard linked list node
struct LinkedListNode{
    int val;
    LinkedListNode* next;
    // called a constructor
    // it is kind of a function
    // which is called to give
    // default values whenever you 
    // create a linked list
    LinkedListNode(int val){
        this->val = val;
        next = nullptr;
    }
};


// helper function to print the list
void print(LinkedListNode* root){
    if(!root)
        return;
    cout << (root->val) << " ";
    print(root->next);

    // alternate function
    // while(root){
    //     cout << (root->val) << " ";
    //     root = root->next;
    // }
}

// function used to delete the whole linked list
// at the end of execution of the code
void deleteList(LinkedListNode* head) {
    while (head) {
        LinkedListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main(){
    int n;
    cin >> n;
    // at the start, head is nullptr
    LinkedListNode* head = nullptr;

    // iterate n times
    while(n--){
        int idx, val;
        // read in index and value
        cin >> idx >> val;
        // if the idx is zero, change head to point
        // to this new node
        if(idx == 0){
            LinkedListNode* newNode = new LinkedListNode(val);
            newNode->next = head;
            head = newNode;
        }
        else{
            // create a tmp poiner,
            // and move ahead to reach the 
            // node at the (idx-1)th index
            LinkedListNode* tmp = head;
            idx--;
            while(idx--)
                tmp = tmp->next;
            LinkedListNode* newNode = new LinkedListNode(val);
            newNode->next = tmp->next;
            tmp->next = newNode;
        }
    }

    print(head);
    cout << endl;
    deleteList(head);
}
