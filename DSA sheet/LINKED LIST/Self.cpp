#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int> arr = {2, 5, 8, 7};
    // A Node object z is created
    Node z = Node(arr[1], nullptr);
    cout << z.data <<endl;

    // A pointer y to a Node object is created on the heap
    Node* y = new Node(arr[0], nullptr);   //just creating an Object
    cout << y;  //prints 0xc21d80 a pointer to the memory location
}