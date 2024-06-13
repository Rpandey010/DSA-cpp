#include <iostream>

using namespace std;

// ListNode structure definition
struct ListNode {
    int val;
    ListNode* next;

    // Constructor
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* deleteFromMiddle(ListNode* head, int position){
    //Move to the second last node
    ListNode* ptr = head;
    for(int i = 0; i < position - 1; i++){     
        ptr = ptr->next;
    }
    
    //get the ndoe to delete
    ListNode* nodeToDelete =  ptr->next;

    //Get the address of node next  to the node to be deleted
    ListNode* nextNode = nodeToDelete->next;

    //point the next of the ptr to nextNode, creating a new link
    ptr->next = nextNode;

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
    ListNode* head = deleteFromMiddle(l1, 3);
    
    // Print the updated list
    ListNode* temp = head;
    while(temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
