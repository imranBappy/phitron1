#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node<T> *left;
    Node<T> *right;
    Node(T data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
// root n
// log n * log n
template <typename DT>
class Tree
{
    DT check;
    void print_space(int time)
    {
        for (int i = 0; i < time * 4; i++)
            cout << " ";
    }

public:
    Node<DT> *root;
    Tree(DT check)
    {
        this->check = check;
    }
    void input()
    {
        queue<Node<DT> *> parentQ, childrenQ;
        Node<DT> *parent, *left_child, *right_child;
        int n;
        cin >> n;
        // loop
        for (int i = 0; i < n; i++)
        {
            DT a, b, c;
            if (!this->root)
            {
                cin >> a >> b >> c;
                parent = new Node<DT>(a);
                left_child = new Node<DT>(b);
                right_child = new Node<DT>(c);
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
                Node<DT> *node = parentQ.front();
                Node<DT> *child;

                if (isLeft)
                {
                    if (b != -1)
                    {
                        child = new Node<DT>(b);
                        node->left = child;
                        childrenQ.push(child);
                    }
                    isLeft = !isLeft;
                }
                if (!isLeft)
                {
                    if (c != -1)
                    {
                        child = new Node<DT>(c);
                        node->right = child;
                        childrenQ.push(child);
                    }
                    isLeft = !isLeft;
                }
                parentQ.pop();
            }
        }
    }
    void inOrder(Node<DT> *node)
    {
        if (node->left)
            inOrder(node->left);
        printf("%d ", node->data);
        if (node->right)
            inOrder(node->right);
    }
    void preOrder(Node<DT> *node)
    {
        printf("%d ", node->data);
        if (node->left)
            preOrder(node->left);
        if (node->right)
            preOrder(node->right);
    }
    void postOrder(Node<DT> *node)
    {
        if (node->left)
            postOrder(node->left);
        if (node->right)
            postOrder(node->right);
        printf("%d ", node->data);
    }
    void input_with_arr()
    {
        int n;
        cin >> n;
        Node<DT> **nodes = new Node<DT> *[n];
        for (int i = 0; i < n; i++)
        {
            nodes[i] = new Node<DT>(this->check);
        }
        for (int i = 0; i < n; i++)
        {
            int value, left, right;
            cin >> value >> left >> right;
            nodes[i]->data = value;
            if (left != this->check)
            {
                nodes[i]->left = nodes[left];
            }
            if (right != this->check)
            {
                nodes[i]->right = nodes[right];
            }
        }
        this->root = nodes[0];
    }
    void print_tree_my(Node<DT> *node, int count)
    {
        this->print_space(count);
        cout << "Root : " << node->data << endl;
        if (node->left->left)
        {
            this->print_space(count);
            printf("Left :\n");
            print_tree_my(node->left, count + 1);
        }
        else
        {
            this->print_space(count);
            cout << "Left : " << node->left->data << endl;
            this->print_space(count);
            cout << "Right : " << node->right->data << endl;
            return;
        }
        if (node->right->right)
        {
            this->print_space(count);
            printf("Right :\n");
            print_tree_my(node->right, count + 1);
        }
        else
        {
            this->print_space(count);
            cout << "Right : " << node->right->data << endl;

            return;
        }
    }
    void print_tree(Node<DT> *root, int count)
    {
        if (root == NULL)
            return;
        if (root->left == NULL && root->right == NULL)
        {
            cout << root->data << endl;
            return;
        }
        else
        {
            cout << endl;
            this->print_space(count);
            cout << "Root : " << root->data << endl;
        }

        if (root->left != NULL)
        {
            this->print_space(count);
            cout << "Left : ";
            print_tree(root->left, count + 1);
        }
        if (root->right != NULL)
        {
            this->print_space(count);
            cout << "Right : ";
            print_tree(root->right, count + 1);
        }
    }
    int check_index(DT postOrder[], DT n, DT pre_value, DT terget)
    {
        int index = n + 1;
        int index_pre_value = -1;
        for (int i = 0; i < n; i++)
            if (postOrder[i] == pre_value)
                index_pre_value = i;
        for (int i = 0; i < n; i++)
            if (postOrder[i] == terget)
                index = i;
        return index < index_pre_value ? index_pre_value : -1;
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
        {
            return node;
        }
        int pos = search_InOrder(inOrder, current, start, end);
        node->left = input_by_scan1(preOrder, inOrder, start, pos - 1);
        node->right = input_by_scan1(preOrder, inOrder, pos + 1, end);
        return node;
    }
    void print_left_boundary(Node<DT> *node)
    {
        while (node->left)
        {
            printf("%d ", node->data);
            node = node->left;
        }
    }
    void print_right_boundary(Node<DT> *node)
    {
        while (node->right)
        {
            printf("%d ", node->data);
            node = node->right;
        }
    }
    void print_leaf(Node<DT> *node)
    {
        if (node == NULL)
            return;

        if (node->left == NULL && node->right == NULL)
        {
            printf("%d ", node->data);
            return;
        }
        print_leaf(node->left);
        print_leaf(node->right);
    }
    void print_boundary(Node<DT> *node)
    {
        printf("%d ", node->data);
        this->print_left_boundary(node->left);
        this->print_leaf(node);
        this->print_right_boundary(node->right);
    }
    void input_by_scan(DT preOrder[], DT postOrder[], int n)
    {
        DT arr[n][3];
        for (int i = 0; i < n; i++)
        {
            int index = check_index(postOrder, n, preOrder[i], preOrder[i + 1]);
            arr[i][0] = preOrder[i];
            if (index != this->check)
            {
                arr[i][1] = preOrder[i + 1];
                arr[i][2] = postOrder[index - 1];
                postOrder[index] = this->check;
            }
            else
            {
                arr[i][1] = -1;
                arr[i][2] = -1;
            }

            cout << endl;
        }
        this->sorting(arr, n);
        Node<DT> **nodes = new Node<DT> *[n];
        for (int i = 0; i < n; i++)
        {
            nodes[i] = new Node<DT>(this->check);
        }
        for (int i = 0; i < n; i++)
        {
            int value, left, right;
            value = arr[i][0];
            left = arr[i][1];
            right = arr[i][2];
            nodes[i]->data = value;
            if (left != this->check)
            {
                nodes[i]->left = nodes[left];
            }
            if (right != this->check)
            {
                nodes[i]->right = nodes[right];
            }
        }
        this->root = nodes[0];
    }
    void sorting(DT arr[][3], int n)
    {
        int is_sorted = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j][0] > arr[j + 1][0])
                {
                    swap(arr[j], arr[j + 1]);
                    is_sorted = 0;
                }
            }
            if (is_sorted)
                return;
            is_sorted = 1;
        }
    }
    void level_order()
    {
        queue<Node<DT> *> q;
        q.push(this->root);
        q.push(NULL);
        int level = 0;
        cout << "\nLevel " << level << " : ";
        while (!q.empty())
        {
            Node<DT> *node = q.front();
            q.pop();
            if (node)
            {
                cout << node->data << " ";
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            else if (!node && !q.empty())
            {
                q.push(NULL);
                level += 1;
                cout << "\nLevel " << level << " : ";
            }
        }
    }
};
/*
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1

013425786
314075826

pre post
0 1 3 4 2 5 7 8 6
3 4 1 7 8 5 6 2 0
*/