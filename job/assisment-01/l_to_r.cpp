#include <bits/stdc++.h>
using namespace std;
#define mx 1000000
int tree[mx * 3];
int arr[mx];
void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2, Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 7;
    // scanf("%d", &n);
    init(1, 1, n);
    for (int i = 0; i <= 13; i++)
    {
        cout << tree[i] << ", ";
    }
    cout << endl
         << endl;

    cout << query(1, 1, 7, 1, 4) << endl;
    return 0;
}