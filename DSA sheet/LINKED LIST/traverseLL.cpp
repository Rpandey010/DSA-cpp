#include <iostream>
using namespace std;

// ListNode structure definition
struct ListNode{
    int val;
    ListNode* next;

    //Constructor
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to traverse and print the linked list
void traverseLL(ListNode* head){
    ListNode* temp = head;

    while(temp != nullptr){
        cout << temp->val <<" ";

        //move to the next node
        temp = temp->next;
    }
}

int main(){
    //Creating 3 nodes
    ListNode* l1 = new ListNode(4);
    ListNode* l2 = new ListNode(9);
    ListNode* l3 = new ListNode(12);
    ListNode* l4 = new ListNode(18);
    ListNode* l5 = new ListNode(21);

    //Link the nodes
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    l5->next = nullptr;

    //Traverse and print
    traverseLL(l1);

    //Clean up (free memory)
    delete l1;
    delete l2;
    delete l3;

    return 0;
}
