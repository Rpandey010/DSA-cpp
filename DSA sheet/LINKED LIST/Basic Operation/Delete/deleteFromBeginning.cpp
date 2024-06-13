#include <iostream>

using namespace std;

// ListNode structure definition
struct ListNode {
    int val;
    ListNode* next;

    // Constructor
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* deleteAtStart(ListNode* head){
    //SIMPly move the head to the next position
    head = head->next;
    return head; 
}

int main(){
    //Creating 5 nodes
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

    // Delete the first node
    ListNode* head = deleteAtStart(l1);
    
    // Print the updated list
    ListNode* temp = head;
    while(temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
