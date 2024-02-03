#include <bits/stdc++.h>
using namespace std;

void bubble_sort_rec(vector<int> &arr, int n, int j)
{
    if (n == 1)
    {
        return;
    }

    if (j == n - 1)
    {
        bubble_sort_rec(arr, n - 1, 0);
        return;
    }

    if (arr[j] > arr[j + 1])
    {
        swap(arr[j], arr[j + 1]);
    }

    bubble_sort_rec(arr, n, j + 1);
}
int main()
{
    // -10, 2, 12, -5, 5, 3, 2, 1
    vector<int> v = {8, 22, 7, 9, 31, 19, 5, 13};
    int n = v.size();
    bubble_sort_rec(v, n, 0);
    for (int x : v)
    {
        cout << x << ",";
    }
}