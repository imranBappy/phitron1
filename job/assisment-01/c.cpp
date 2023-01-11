#include <bits/stdc++.h>
using namespace std;
int N = 110;
bool primes[110];
class Node
{
public:
    Node *left;
    Node *right;
    int val;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *head = NULL;
vector<int> output;
void preOrder(Node *head)
{
    if (head == NULL)
        return;

    if (primes[head->val] && !head->left && !head->right)
        output.push_back(head->val);
    preOrder(head->left);
    preOrder(head->right);
}

void sieve()
{
    memset(primes, true, sizeof(primes));
    primes[0] = primes[1] = false;
    for (int i = 4; i <= N; i += 2)
        primes[i] = false;
    for (int i = 3; i * i <= N; i += 2)
        if (primes[i])
            for (int j = i * 3; j <= N; j += i + i)
                primes[j] = false;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    int val;
    queue<Node *> heads;
    int input_count = 0;

    while (scanf("%d", &val) != -1)
    {
        if (head == NULL)
        {
            head = new Node(val);
            heads.push(head);
            continue;
        }
        input_count++;
        Node *node = heads.front();
        if (input_count == 1 && val != -1)
        {
            node->left = new Node(val);
            heads.push(node->left);
        }
        else if (input_count == 2 && val != -1)
        {
            node->right = new Node(val);
            heads.push(node->right);
        }
        if (input_count == 2)
        {
            heads.pop();
            input_count = 0;
        }
    }
    sieve();
    preOrder(head);
    if (output.empty())
    {
        cout << -1 << endl;
        return 0;
    }

    sort(output.begin(), output.end());

    for (int val : output)
    {
        cout << val << " ";
    }

    return 0;
}