#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
/*
9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6
*/
typedef struct node Node;
struct node
{
    int data;
    Node *left;
    Node *right;
};
Node *root = NULL;
Node *create_node(int item)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
    {
        printf("Error! Could Not Create A New Node\n");
    }

    newNode->data = item;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void add_left_child(Node *node, Node *child)
{
    node->left = child;
}
void add_right_child(Node *node, Node *child)
{
    node->right = child;
}

int to_binary(int binary[], int len)
{
    double decimal = 0;
    for (int i = 0; i < len; i++)
        if (binary[len - i - 1] == 1)
            decimal += pow(2.0, (double)i);
    return (int)decimal;
}
int makeSum(Node *root, int binary[1000], int n, int sum)
{
    binary[n] = root->data;
    n++;
    int outout = 0;
    if (root->left)
        outout = makeSum(root->left, binary, n, outout);
    else
    {
        int decimal = 0;
        decimal = to_binary(binary, n);
        return sum + decimal;
    }
    if (root->right)
        outout = makeSum(root->right, binary, n, outout);
    else
    {
        int decimal = 0;
        decimal = to_binary(binary, n);
        return sum + outout;
    }

    return sum + outout;
}

int sumRootToLeaf(Node *root)
{
    int binary[1000];
    return makeSum(root, binary, 0, 0);
}
void print_tree(Node *node)
{
    if (node->left)
        print_tree(node->left);
    printf("%d, ", node->data);

    if (node->right)
        print_tree(node->right);
}
void print_space(int time)
{
    for (int i = 0; i < time * 4; i++)
        cout << " ";
}
void print_tree_my(Node *node, int count)
{
    print_space(count);
    cout << "Root : " << node->data << endl;
    if (node->left->left)
    {
        print_space(count);
        printf("Left :\n");
        print_tree_my(node->left, count + 1);
    }
    else
    {
        print_space(count);
        cout << "Left : " << node->left->data << endl;
        print_space(count);
        cout << "Right : " << node->right->data << endl;
        return;
    }
    if (node->right->right)
    {
        print_space(count);
        printf("Right :\n");
        print_tree_my(node->right, count + 1);
    }
    else
    {
        print_space(count);
        cout << "Right : " << node->right->data << endl;
        return;
    }
}
int main()
{
    Node *root = create_node(1);
    Node *root_left = create_node(0);
    Node *root_right = create_node(1);
    add_left_child(root, root_left);
    add_right_child(root, root_right);

    Node *root_left_left = create_node(0);
    Node *root_left_right = create_node(1);

    add_left_child(root_left, root_left_left);
    add_right_child(root_left, root_left_right);

    Node *root_right_left = create_node(0);
    Node *root_right_right = create_node(1);

    add_left_child(root_right, root_right_left);
    add_right_child(root_right, root_right_right);

    int result = sumRootToLeaf(root);
    cout << "final result = " << result << endl;
    cout << endl;
    cout << endl;
    // print_tree(root);
    return 0;
}