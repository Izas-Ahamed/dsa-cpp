#include <bits/stdc++.h>
using namespace std;

int lastOcc(int arr[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }

    int subIndex = lastOcc(arr + 1, n - 1, key);
    if (subIndex > -1)
    {
        return subIndex + 1;
    }

    if (arr[0] == key)
    {
        return 0;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << lastOcc(arr, n, 6);
}