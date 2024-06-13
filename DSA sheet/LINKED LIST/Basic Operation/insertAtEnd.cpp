#include <iostream>

using namespace std;

// ListNode structure definition
struct ListNode {
    int val;
    ListNode* next;

    // Constructor
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to insert a node at the beginning of the list
ListNode* insertAtEnd(ListNode* head, int valToInsert) {
    // Create a new node to insert
    ListNode* newNode = new ListNode(valToInsert);

    // Go to the end of the list
    ListNode* ptr = head;
    while(ptr->next != nullptr){
        ptr = ptr->next;
    }

    // last nodes pointer assigned to newNode that we created
    ptr->next = newNode;

    //return orignal head
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

    // Insert 69 at the end
    ListNode* head = insertAtEnd(l1, 69);
    
    // Print the updated list
    ListNode* temp = head;
    while(temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
