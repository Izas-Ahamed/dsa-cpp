#include <bits/stdc++.h>
using namespace std;

int countWays(int i, int j, int m, int n)
{
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }
    if (i == m || j == n)
        return 0;
    return countWays(i, j + 1, m, n) + countWays(i + 1, j, m, n);
}

int main()
{
    int m = 4, n = 4;
    // int arr[m][n] = {0};
    cout << countWays(0, 0, m, n);
}