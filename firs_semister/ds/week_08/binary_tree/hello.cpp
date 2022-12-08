#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        this->data = -1;
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
// root n
// log n * log n

class Tree
{
    void print_space(int time)
    {
        for (int i = 0; i < time * 4; i++)
            cout << " ";
    }

public:
    Node *root;
    Tree()
    {
        this->root = NULL;
    }
    Tree(int data)
    {
        this->root = new Node(data);
    }
    void input()
    {
        queue<Node *> parentQ, childrenQ;
        Node *parent, *left_child, *right_child;
        int n;
        cin >> n;
        // loop
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            if (!this->root)
            {
                cin >> a >> b >> c;
                parent = new Node(a);
                left_child = new Node(b);
                right_child = new Node(c);
                parent->left = left_child;
                parent->right = right_child;
                this->root = parent;
                parentQ.push(parent);
                childrenQ.push(left_child);
                childrenQ.push(right_child);
                continue;
            }
            parentQ.swap(childrenQ);
            while (!childrenQ.empty())
                childrenQ.pop();
            int isLeft = 1;
            while (!parentQ.empty())
            {
                isLeft = 1;
                cin >> a;
                cin >> b;
                cin >> c;
                Node *node = parentQ.front();
                Node *child;

                if (isLeft)
                {
                    if (b != -1)
                    {
                        child = new Node(b);
                        node->left = child;
                        childrenQ.push(child);
                    }
                    isLeft = !isLeft;
                }
                if (!isLeft)
                {
                    if (c != -1)
                    {
                        child = new Node(c);
                        node->right = child;
                        childrenQ.push(child);
                    }
                    isLeft = !isLeft;
                }
                parentQ.pop();
            }
        }
    }
    void add_left(Node *parent, int data)
    {
        Node *node = new Node(data);
        parent->left = node;
    }
    void add_right(Node *parent, int data)
    {
        Node *node = new Node(data);
        parent->right = node;
    }
    void traverse(Node *node)
    {
        printf("-> %d ", node->data);
        if (node->left)
            traverse(node->left);
        if (node->right)
            traverse(node->right);
    }
    void print_tree(Node *node, int count)
    {
        this->print_space(count);
        printf("Root : %d\n", node->data);
        if (node->left->left)
        {
            this->print_space(count);
            printf("Left :\n");
            print_tree(node->left, count + 1);
        }
        else
        {
            this->print_space(count);
            printf("Left : %d\n", node->left->data);
            this->print_space(count);
            printf("Right : %d\n", node->right->data);
            return;
        }
        if (node->right->right)
        {
            this->print_space(count);
            printf("Right :\n");
            print_tree(node->right, count + 1);
        }
        else
        {
            this->print_space(count);
            printf("Right : %d\n", node->right->data);
            return;
        }
    }
    int level(Node *node, int count)
    {
        if (node->left == NULL || node->right == NULL)
            return count;
        if (node->left)
            level(node->left, count + 1);
        if (node->right)
            level(node->right, count + 1);
    }
    int count_level()
    {
        int count = 1;
        Node *node = this->root;
        count = this->level(node, count);
        cout << count << endl;
    }
};

int main()
{
    Tree tree;
    // int n;
    // cin >> n;
    // Node **nodes = new Node *[n];
    // for (int i = 0; i < n; i++)
    //     nodes[i] = new Node(-1);

    // for (int i = 0; i < n; i++)
    // {
    //     int value, left, right;
    //     cin >> value >> left >> right;
    //     nodes[i]->data = value;
    //     if (left != -1)
    //     {
    //         nodes[i]->left = nodes[left];
    //     }
    //     if (right != -1)
    //     {
    //         nodes[i]->right = nodes[right];
    //     }
    // }

    // tree.root = nodes[0];
    // tree.traverse(tree.root);
    // tree.input();
    tree.input();
    tree.print_tree(tree.root, 0);

    return 0;
}