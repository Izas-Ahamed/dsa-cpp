#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    int n = 4, m = 3;

    int i = 0, j = n - 1, l = n * m;

    int x = 10;

    while (l--)
    {
        if (arr[i][j] == x)
        {
            cout << i << "," << j;
            break;
        }

        if (arr[i][j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}