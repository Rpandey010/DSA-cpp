#include <iostream>
using namespace std;

// ListNode structure definition
struct ListNode{
    int val;
    ListNode* next;

    //Constructor
    ListNode(int x) : val(x), next(nullptr) {}
};

int main(){
    //Creating 3 nodes
    ListNode* l1 = new ListNode(4);
    ListNode* l2 = new ListNode(9);
    ListNode* l3 = new ListNode(12);

    //Link the nodes
    l1->next = l2;
    l2->next = l3;
    l3->next = nullptr;

    //Print the values
    ListNode* ptr = l1;  //ptr at one node head
    while(ptr != nullptr){
        cout << ptr->val <<endl;
        ptr = ptr->next;
    }

    //Clean up (free memory)
    delete l1;
    delete l2;
    delete l3;

    return 0;
}
