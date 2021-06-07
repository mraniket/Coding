#include <iostream>
using namespace std;

struct Node
{

    int data;
    Node *right;
    Node *left;

    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};

//        1
//      /   \
//     2     3
//    / \   / \
//   4   5 6   7

int calcHeight(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    return max(lHeight, rHeight) + 1;

    // time complexity O(n)  where n is number of nodes in our tree
}

int calcDiameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;

    int ldiameter = calcDiameter(root->left);
    int rdiameter = calcDiameter(root->right);

    return max(currDiameter, max(ldiameter, rdiameter));
//  time complexity O(n^2)
}

int calDiameter_better_approach(Node* root, int* height){
    if(root == NULL){
        *height = 0;
        return 0;
    }

    int lh = 0;
    int rh = 0;
    
    int lDiameter = calDiameter_better_approach(root->left, &lh);
    int rDiameter = calDiameter_better_approach(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;

    // cout<<*height<<endl;
    // cout<<height<<endl;

    return max(currDiameter, max(lDiameter, rDiameter));
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //height of binary tree
   //cout << calcHeight(root) << endl;
  // cout << calcDiameter(root) << endl;
  int height = 0;
  cout << calDiameter_better_approach(root, &height) << endl;


    return 0;
}