#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1 = nullptr){
        data = data1;
        next = next1;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Traversal
void traverseLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data <<" ";
        temp = temp->next;
    }
}

// Length of Linked List
int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// Search an element
bool searchLL(Node* head, int target){
    Node* temp = head;
    while(temp){
        if(temp->data == target)
            return true;
        temp = temp->next;
    }
    return false;
}

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* head = convertArr2LL(arr);
    
    // Traversal
    cout << "Linked List: ";
    traverseLL(head);
    cout << "\n";

    // Length
    cout << "Length: " << lengthOfLL(head) << "\n";

    // Search
    int target = 5;
    if(searchLL(head, target))
        cout << target << " is in the linked list.\n";
    else
        cout << target << " is not in the linked list.\n";

    return 0;
}