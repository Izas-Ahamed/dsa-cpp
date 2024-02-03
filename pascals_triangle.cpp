#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 5;

    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 or j == i)
            {
                v[i].push_back(1);
            }
            else
            {
                v[i].push_back(v[i - 1][j - 1] + v[i - 1][j]);
            }
        }
    }
    for (vector<int> x : v)
    {
        for (int y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}