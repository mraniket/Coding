#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
        /* data */
    }
};
int search(int inorder[], int start, int end, int current)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] = current)
        {
            return i;
        }
    }
    return -1;
}
Node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int index = 0;
    if (start > end)
    {
        return NULL;
    }

    int current = preorder[index];
    Node *node = new Node(current);
    if (start = end)
    {
        return node;
    }

    int pos = search(inorder, start, end, current);
    node->left = buildTree(preorder, inorder, start, pos - 1);
    node->right = buildTree(preorder, inorder, pos + 1, end);

    return node;
}

void inorderP(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderP(root->left);
    cout << root->data << " " << endl;
    inorderP(root->right);
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    Node *root = buildTree(preorder, inorder, 0, 4);
    inorderP(root);

    return 0;
}