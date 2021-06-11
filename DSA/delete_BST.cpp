#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        Node *left, *right = NULL;
    }
};

Node *inOrderSeccure(Node *root)
{
    Node *curr = root; //here root means the right of our node to be deleted;;;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    // When left of current is null then return the same current
    return curr;
}

Node *deleteInBST(Node *root, int key)
{

    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }
    else
    {
        //these two conditional statements are for the node having one child;;;;;;
        // and also for the leaf nodes to be delete;;;;;;;;

        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        // and now the third conditon that is the node having two child nodes;;;;;

        Node *temp = inOrderSeccure(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }

    return root;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    inOrder(root);
    cout << endl;
    root = deleteInBST(root, 2);
    inOrder(root);
    cout << endl;

    return 0;
}
