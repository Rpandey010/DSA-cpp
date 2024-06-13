#include <iostream>

using namespace std;

// ListNode structure definition
struct ListNode {
    int val;
    ListNode* next;

    // Constructor
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* insertAtMiddle(ListNode* head, int valToInsert, int position){
    //Creating a newNode to insert
    ListNode* newNode = new ListNode(valToInsert);
    
    //move to the position
    ListNode* ptr = head;
    for(int i = 0; i < position; i++){
        ptr = ptr->next;
    }

    //insert the node
    newNode->next = ptr->next;
    ptr->next = newNode;  //break the existing link

    //Return the original head
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

    // Insert 1 at the beginning of the list
    ListNode* head = insertAtMiddle(l1, 567, 1);

    // Print the updated list
    ListNode* temp = head;
    while(temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}

