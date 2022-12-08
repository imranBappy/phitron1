#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node *left;
    Node *right;
    Node()
    {
        this->data = '\0';
        this->left = NULL;
        this->right = NULL;
    }
    Node(T data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

template <typename DT>

class Tree
{
public:
    Node<DT> *root = NULL;
    Tree() { this->root = NULL; }
    Tree(int data) { this->root = new Node<DT>(data); }
    void input()
    {
        int n;
        cin >> n;
        Node<DT> **nodes = new Node<DT> *[n];
        for (int i = 0; i < n; i++)
            nodes[i] = new Node<DT>(-1);
        int data, left, right;
        for (int i = 0; i < n; i++)
        {
            cin >> data >> left >> right;
            nodes[i]->data = data;
            if (left != -1)
                nodes[i]->left = nodes[left];
            if (right != -1)
                nodes[i]->right = nodes[right];
        }
        this->root = nodes[0];
    }
    void preOrder(Node<DT> *root)
    {
        if (root == NULL)
            return;
        cout << root->data << " -> ";
        preOrder(root->left);
        preOrder(root->right);
    }
    void inOrder(Node<DT> *root)
    {
        if (root == NULL)
            return;
        inOrder(root->left);
        cout << root->data << " -> ";
        inOrder(root->right);
    }
    void postOrder(Node<DT> *root)
    {
        if (root == NULL)
            return;
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " -> ";
    }
    void level_order()
    {
        Node<DT> *root = this->root;

        int level = 0;
        queue<Node<DT> *> nodes;
        cout << "Level " << level << " : ";
        nodes.push(root);
        nodes.push(NULL);
        while (nodes.size() > 1)
        {
            Node<DT> *current = nodes.front();
            if (current == NULL)
            {
                level++;
                nodes.pop();
                nodes.push(NULL);
                cout << "\nLevel " << level << " : ";
            }
            if (current)
            {
                if (current->left)
                    nodes.push(current->left);
                if (current->right)
                    nodes.push(current->right);
                cout << current->data << " -> ";
                nodes.pop();
            }
        }
    }
    int search_InOrder(DT inOrder[], DT current, int start, int end)
    {
        for (int i = start; i <= end; i++)
            if (inOrder[i] == current)
                return i;
        return -1;
    }
    Node<DT> *input_by_scan1(DT preOrder[], DT inOrder[], int start, int end)
    {
        static int id = 0;
        DT current = preOrder[id];
        id++;
        Node<DT> *node = new Node<DT>(current);
        if (start == end)
            return node;
        int pos = search_InOrder(inOrder, current, start, end);
        node->left = input_by_scan1(preOrder, inOrder, start, pos - 1);
        node->right = input_by_scan1(preOrder, inOrder, pos + 1, end);
        return node;
    }
};

int find_index(int arr[], int n, int value)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == value)
            return i;
    cout << endl;
    return -1;
}

int find_left(int arr[], int n, int value, int target)
{
    int index = find_index(arr, n, value);
    for (int i = 0; i < index; i++)
        if (arr[i] == target)
            return 1;
    return 0;
}

int find_right(int arr[], int n, int value, int target)
{
    int index = find_index(arr, n, value);
    for (int i = n - 1; i > index; i--)
        if (arr[i] == target)
            return 1;
    return 0;
}

// Node *scan_preOrder(Node *root, int preOrder[], int inOrder[], int n, int count) // 5
// {
//     // if (root == NULL && count == 0)
//     //     root = newNode;
//     static int current = 1;
//     if (find_left(inOrder, n, preOrder[count], preOrder[current]))
//     {
//         cout << "left" << endl;
//         root->left = new Node(preOrder[current]);
//         current++;
//         scan_preOrder(root->left, preOrder, inOrder, n, count + 1);
//     }
//     if (find_right(inOrder, n, preOrder[count], preOrder[current]))
//     {
//         cout << "right" << endl;

//         root->right = new Node(preOrder[current]);
//         current++;
//         scan_preOrder(root->right, preOrder, inOrder, n, count + 1);
//     }
//     return root;
// }

int main()
{
    int n;
    cin >> n;
    char preOrder[n], inOrder[n];
    for (int i = 0; i < n; i++)
        cin >> preOrder[i];
    for (int i = 0; i < n; i++)
        cin >> inOrder[i];

    Tree<char> *t = new Tree<char>();
    // t.input();

    t->root = t->input_by_scan1(preOrder, inOrder, 0, n - 1);
    // t->level_order();
    // cout << t->root->data << endl;
    // if (t->root == NULL)
    // {
    //     cout << "True" << endl;
    // }
    // else
    // {
    //     cout << "False" << endl;
    // }
    cout << "Hello world\n";
    // t->inOrder(t->root);

    return 0;
}