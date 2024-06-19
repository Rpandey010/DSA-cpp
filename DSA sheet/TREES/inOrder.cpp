#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

void inOrder(TreeNode* root){
    //Terminating Condition
    if (root == nullptr)
        return;

    //Traverse the left node
    inOrder(root->left);

    //print the root node
    cout << root->val << " -> ";

    //Go to the right node
    inOrder(root->right);
}

int main(){
    //Creating a tree that looks like
    //          2
    TreeNode* root = new TreeNode(2);

    // Adding left and right child
    //            2
    //          /  \
    //        8     4
    root->left = new TreeNode(8);
    root->right = new TreeNode(4);

    TreeNode* leftNode = root->left;
    TreeNode* rightNode = root->right;

    // Adding more child to left node
    //            2
    //          /  \
    //        8     4
    //      /  \
    //     3   7
    leftNode->left = new TreeNode(3);
    leftNode->right = new TreeNode(7);

    // Adding child to right node
    //            2
    //          /  \
    //        8     4
    //      /  \     \
    //     3   7      1
    rightNode->right = new TreeNode(1);
    // Adding child to child of right node
    //            2
    //          /  \
    //        8     4
    //      /  \     \
    //     3   7      1
    //               /
    //              6
    rightNode->right->left = new TreeNode(6);

    //INORDER TRAVERSAL
    inOrder(root);
    cout << "null" << endl;  //to indicate the end of traversal

    return 0;



}