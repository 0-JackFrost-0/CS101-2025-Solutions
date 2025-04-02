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
    LinkedListNode* head = nullptr;
    while(n--){
        char command;
        int val;
        cin >> command >> val;
        if(command == 'I'){
            LinkedListNode* newNode = new LinkedListNode(val);
            // if head is nullptr, just point head to this new node
            if(!head){
                head = newNode;
                continue;
            }
            // otherwise, reach the end of the linked list
            // to add this new node
            LinkedListNode* cur = head;
            while(cur->next)
                cur = cur->next;
            cur->next = newNode;
        }
        else if(command == 'D'){
            LinkedListNode* cur = head;
            // if the first element is to be
            // deleted, do head = head->next
            if(val == 0){
                LinkedListNode* tmp = head;
                head = head->next;
                delete tmp;
            }
            // otherwise, do next index-1 times
            else{
                val--;
                while(val--){
                    cur = cur->next;
                }
                LinkedListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }
        }
    }
    print(head);
    cout << endl;

    deleteList(head);
}