#include <bits/stdc++.h>
using namespace std;

bool is_max_heap(int H[], int n)
{
    for (int i = n; i > 1; i--)
        if (H[i / 2] < H[i])
            return false;
    return true;
}
int main()
{
    int max_heap[10] = {0, 19, 7, 17, 3, 5, 12, 10, 1, 4};
    int result = is_max_heap(max_heap, 9);
    cout << result << endl;
    return 0;
}