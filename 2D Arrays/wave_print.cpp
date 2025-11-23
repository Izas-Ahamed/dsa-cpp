#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr{{1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12}};
    int n = 4, m = 3;
    int times = n * m;
    int i = 0;
    int mover = 1;
    while (times--)
    {
        if (i == m)
        {
            mover = -1;
            n--;
            i--;
        }
        else if (i == -1)
        {
            mover = 1;
            i++;
            n--;
        }
        cout << arr[i][n - 1] << " ";
        i += mover;
    }
}