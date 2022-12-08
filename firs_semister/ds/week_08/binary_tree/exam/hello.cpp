#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int traverse(Node *root, int *tilt)
{
    if (!root)
        return 0;

    int leftchild = traverse(root->left, tilt);
    int right = traverse(root->right, tilt);

    *tilt += abs(leftchild - right);

    return leftchild + right + root->data;
}

int findTilt(Node *root)
{
    int tilt = 0;
    traverse(root, &tilt);
    return tilt;
}

int main()
{

    Node *root = NULL;
    root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    findTilt(root);
    return 0;
}
