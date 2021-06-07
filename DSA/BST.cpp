#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        Node* left = NULL;
        Node* right = NULL;
    }
    
};

Node* BinarySearch(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(root->data > val){
        root->left = BinarySearch(root->left, val) ;
    }
    if(root->data < val){
        root->right = BinarySearch(root->right, val) ;
    }
    return root;
}
void inorder(Node* root){
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}

int main()
{

    Node* root = NULL;
    root = BinarySearch(root, 5);
    BinarySearch(root, 1);
    BinarySearch(root, 3);
    BinarySearch(root, 4);
    BinarySearch(root, 2);
    BinarySearch(root, 7);
    // print inorder;

    inorder(root);
    



    return 0;
}
