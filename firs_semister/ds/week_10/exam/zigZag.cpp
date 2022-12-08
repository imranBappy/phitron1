#include "bst.h"
#include <bits/stdc++.h>
using namespace std;
void level_order(Node *root)
{
    int level = 0;
    queue<Node *> nodes;
    printf("Level %d : ", level);
    nodes.push(root);
    nodes.push(NULL);
    while (nodes.size() > 1)
    {
        Node *current = nodes.front();
        if (current == NULL)
        {
            level++;
            nodes.pop();
            nodes.push(NULL);
            printf("\nLevel %d : ", level);
        }
        if (current)
        {
            if (current->left)
                nodes.push(current->left);
            if (current->right)
                nodes.push(current->right);
            printf("%d ->", current->data);
            nodes.pop();
        }
    }
}

void zigGaz_traversal(Node *root)
{
    stack<Node *> stack1, stack2;
    queue<Node *> queue1, queue2;
    stack1.push(root);
    queue1.push(root);
    int flag = 1;
    while (1)
    {
        if (stack1.size() == 0 && stack2.size() == 0)
            break;
        Node *stack_top;
        Node *queue_font;
        if (flag)
        {
            stack_top = stack1.top();
            queue_font = queue1.front();
            stack1.pop();
            queue1.pop();
            if (stack_top->right != NULL)
            {
                stack2.push(stack_top->right);
                queue2.push(stack_top->right);
            }
            if (stack_top->left != NULL)
            {
                stack2.push(stack_top->left);
                queue2.push(stack_top->left);
            }
        }
        else
        {
            stack_top = stack2.top();
            queue_font = queue2.front();
            stack2.pop();
            queue2.pop();
            if (stack_top->left != NULL)
            {
                stack1.push(stack_top->left);
                queue1.push(stack_top->left);
            }
            if (stack_top->right != NULL)
            {
                stack1.push(stack_top->right);
                queue1.push(stack_top->right);
            }
        }
        printf("%d -> ", queue_font->data);
        if (stack1.size() == 0)
            flag = 0;
        if (stack2.size() == 0)
            flag = 1;
    }
}

int main()
{
    BST t;
    int n, temp;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        t.insert(t.root, temp);
    }
    zigGaz_traversal(t.root);
    // level_order(t.root);
    return 0;
}