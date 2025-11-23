#include <bits/stdc++.h>
using namespace std;

bool checker(vector<vector<int>> &v, int m, int n, int i1, int j1)
{
    // column check '|'
    for (int i = i1; i >= 0; i--)
    {
        if (v[i][j1] == 1)
            return false;
    }
    // right diagnoal '/'
    for (int i = i1, j = j1; i >= 0 && j < n; i--, j++)
    {
        if (v[i][j] == 1)
            return false;
    }
    // left diagonal '\'
    for (int i = i1, j = j1; i >= 0 && j >= 0; i--, j--)
    {
        if (v[i][j] == 1)
            return false;
    }
    return true;
}

int solve(vector<vector<int>> v, int m, int n, int i, int j, bool &flag)
{

    if (i == m || flag)
    {
        // flag = true;
        for (auto x : v)
        {
            for (auto y : x)
            {
                cout << y << " ";
            }
            cout << endl;
        }
        cout << endl;
        return 1;
    }

    // if (j == n)
    // {
    //     return;
    // }
    int ways = 0;
    for (int k = 0; k < n; k++)
    {
        // if (flag)
        //     break;
        if (checker(v, m, n, i, k))
        {
            v[i][k] = 1;

            ways += solve(v, m, n, i + 1, k, flag);

            v[i][k] = 0;
        }
    }
    return ways;
    // if (checker(v, m, n, i, j))
    // {
    //     cout << "true: "
    //          << "i: " << i << " j : " << j << endl;
    //     v[i][j] = 1;
    //     for (auto x : v)
    //     {
    //         for (auto y : x)
    //         {
    //             cout << y << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;

    //     solve(v, m, n, i + 1, 0, flag);
    // }
    // else
    // {
    //     cout << "false: "
    //          << "i: " << i << " j: " << j << endl;
    //     for (auto x : v)
    //     {
    //         for (auto y : x)
    //         {
    //             cout << y << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;

    //     solve(v, m, n, i, j + 1, flag);
    // }

    // v[i][j] = 0;
    // cout << "going back"
    //      << " i: " << i << " j: " << j << endl;
    // solve(v, m, n, i, j + 1, flag);
}

void solver(int m, int n)
{

    vector<vector<int>> v(m, vector<int>(n, 0));
    bool flag = false;
    cout << solve(v, m, n, 0, 0, flag);
}

int main()
{
    int n = 4, m = 4;
    solver(n, m);
}
