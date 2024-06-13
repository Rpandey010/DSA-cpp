#include <iostream>

using namespace std;

// ListNode structure definition
struct ListNode {
    int val;
    ListNode* next;

    // Constructor
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* deleteAtEnd(ListNode* head){
    //Move to the second last node
    ListNode* ptr = head;
    while(ptr->next->next != nullptr){   //eg 2 3 4->NULL  if i am at 2 next.next is NULL 
        ptr = ptr->next;
    }
    
    //point the next of second last node to null
    ptr->next = nullptr;

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
    ListNode* head = deleteAtEnd(l1);
    
    // Print the updated list
    ListNode* temp = head;
    while(temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
