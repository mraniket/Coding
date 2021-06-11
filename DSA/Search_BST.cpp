#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* left, *right;

    Node(int val){
         data = val;
        Node* left, *right = NULL;
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

// To search any passed element in our binary search tree
Node* searchInBST(Node* root, int key){
    if (root == NULL){
        return NULL;
    }
    if (root->data == key)
    {
     return root;
    }
    if(root->data > key){
        return searchInBST(root->left, key);
    }

    return searchInBST(root->right, key);
    
}

int main(){

    Node* root = NULL;
    root = BinarySearch(root, 5);
    BinarySearch(root, 1);
    BinarySearch(root, 3);
    BinarySearch(root, 4);
    BinarySearch(root, 2);
    BinarySearch(root, 7);
    // root = new Node(4);
    // root->left = new Node(2);
    // root->right = new Node(5);
    // root->left->left = new Node(1);
    // root->left->right = new Node(3);
    // root->right->right = new Node(6);
    if(searchInBST(root, 4) == NULL){
        cout<<"Key Doesn't exista"<<endl;
    }else{
    cout<<"Key Exists"<<endl;
    }

    return 0;
}