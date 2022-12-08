#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *parent;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->parent = NULL;
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node *parent)
    {
        this->data = data;
        this->parent = parent;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST
{
private:
    void add_left_child(Node *parent, Node *child)
    {
        parent->left = child;
        if (child != NULL)
            child->parent = parent;
    }
    void add_right(Node *parent, Node *child)
    {
        parent->right = child;
        if (child != NULL)
            child->parent = parent;
    }
    Node *node_transplant(Node *root, Node *current, Node *child)
    {

        if (root == current)
        {
            root = child;
        }
        else if (current == current->parent->left)
            add_left_child(current->parent, child);
        else
            add_right(current->parent, child);

        return root;
    }

public:
    Node *root;
    BST()
    {
        this->root = NULL;
    }
    BST(int data)
    {
        this->root = new Node(10);
    }
    void insert_node(int data)
    {
        Node *new_node = new Node(data);
        Node *current = this->root;
        Node *parent = this->root;
        while (current)
        {
            parent = current;
            if (current->data > data)
                current = current->left;
            else
                current = current->right;
        }
        if (parent->data > data)
            add_left_child(parent, new_node);
        else if (parent->data < data)
            add_right(parent, new_node);
        else
            printf("Invalit Data !\n");
    }
    Node *bst_insert(Node *root, int data)
    {
        if (root == NULL)
        {
            Node *new_root = new Node(data);
            return new_root;
        }
        if (root->data > data)
            add_left_child(root, bst_insert(root->left, data));
        else if (root->data < data)
            add_right(root, bst_insert(root->right, data));
        return root;
    }
    void print_inOrder(Node *root)
    {
        if (root == NULL)
            return;
        print_inOrder(root->left);
        printf("%d -> ", root->data);
        print_inOrder(root->right);
    }
    void print_preOrder(Node *root)
    {
        if (root == NULL)
            return;
        printf("%d -> ", root->data);
        print_preOrder(root->left);
        print_preOrder(root->right);
    }
    void print_postOrder(Node *root)
    {
        if (root == NULL)
            return;
        print_postOrder(root->left);
        print_postOrder(root->right);
        printf("%d -> ", root->data);
    }
    void inOrder_string(Node *root, string &str)
    {
        if (root == NULL)
            return;
        inOrder_string(root->left, str);
        str += to_string(root->data) + " ";
        inOrder_string(root->right, str);
    }
    Node *searchNode(Node *root, int value)
    {
        Node *node = NULL;
        // printf("%d -> ", root->data);
        if (root == NULL || root->data == value)
            return root;
        if (root->data > value)
            node = searchNode(root->left, value);
        else
            node = searchNode(root->right, value);
        return node;
    }
    Node *minmum_node(Node *root)
    {
        if (root->left == NULL)
            return root;
        return minmum_node(root->left);
    }
    Node *deleteNode(Node *root, int value)
    {
        if (root->data > value)
            root->left = deleteNode(root->left, value);
        else if (root->data < value)
            root->right = deleteNode(root->right, value);
        else
        {
            if (root->left == NULL)
            {
                Node *temp = root->right;
                delete root;
                return temp;
            }
            else if (root->right == NULL)
            {
                Node *temp = root->left;
                delete root;
                return temp;
            }
            else
            {
                Node *minmum_node = this->minmum_node(root->right);
                root->data = minmum_node->data;
                root->right = this->deleteNode(root->right, minmum_node->data);
            }
        }

        return root;
    }
    bool isBST(Node *root)
    {
        static bool result = true;
        static int previous = -1, flog = 1;
        if (root == NULL)
            return true;
        isBST(root->left);
        if (flog)
        {
            previous = root->data;
            flog = 0;
        }
        if (previous > root->data)
        {
            result = false;
            previous = root->data;
            return false;
        }

        isBST(root->right);
        if (result == false)
            return false;
        else
            return true;
    }
    void insert(Node *&root, int k)
    {
        if (root == NULL)
        {
            root = new Node(k);
            return;
        }
        Node *node = root;
        Node *curr = root;
        while (curr)
        {
            node = curr;
            if (curr->data > k)
                curr = curr->left;
            else
                curr = curr->right;
        }
        if (node->data > k)
            node->left = new Node(k);
        else
            node->right = new Node(k);
    }
    void change_value(Node *&root, int key, int value)
    {
        if (root == NULL)
            return;
        if (key == root->data)
            root->data = value;
        if (root->data > key)
            change_value(root->left, key, value);
        else if (root->data < key)
            change_value(root->right, key, value);
    }
};
