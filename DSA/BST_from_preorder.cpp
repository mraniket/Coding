#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node
{
        int data;
        Node* left, *right;

        Node(int val){
            data = val;
            Node *left, *right = NULL;
        }
};

Node * constructBST(int preorder[], int* preorderIndex, int key, int min, int max, int n){
    if(*preorderIndex >= n){
        return NULL;
    }
    Node * root = NULL;
    if(key > min && key < max){
        root = new Node(key);
        *preorderIndex = *preorderIndex + 1;

        if(*preorderIndex < n){
            root->left = constructBST(preorder, preorderIndex, preorder[*preorderIndex], min, key, n);
        }
        if (* preorderIndex < n){
            root->right = constructBST(preorder, preorderIndex, preorder[*preorderIndex], key, max, n);
        }
        
    }
    return root;
}

int main(){




    return 0;
}