#include <bits/stdc++.h>
using namespace std;

int binary(int data[], int lb, int ub, int item)
{
    int result = -1;
    while (lb <= ub)
    {
        int mid = (lb + ub) / 2;
        if (data[mid] == item)
            return mid;
        else if (data[mid] > item)
            ub = mid - 1;
        else
            lb = mid + 1;
    }
    return result;
}

int binary(int data[], int lb, int ub, int item)
{
    if (lb > ub)
        return -1;
    int mid = (lb + ub) / 2;
    if (data[mid] < item)
        binary(data, mid + 1, ub, item);
    else if (data[mid] > item)
        binary(data, lb, mid - 1, item);
    else
        return mid;
}

int main()
{

    int data[] = {2, 3, 4, 5, 6, 7, 9};

    cout << binary(data, 0, sizeof(data) / sizeof(data[0]) - 1, 9);

    return 0;
}