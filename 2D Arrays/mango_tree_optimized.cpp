#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> v = {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 0, 1, 1},
        {0, 1, 0, 0, 0, 0},
        {0, 1, 1, 0, 0, 1},
        {1, 0, 0, 1, 1, 0},
        {0, 1, 0, 0, 0, 0}};

    // NxN matrix
    int n = v.size();
    int nooftree = INT_MIN;
    vector<vector<int>> aux(n);

    aux[0].push_back(v[0][0]);

    for (int i = 1; i < n; i++)
    {
        aux[i].push_back(v[i][0] + aux[i - 1][0]);
    }

    for (int j = 1; j < n; j++)
    {
        aux[0].push_back(aux[0][j - 1] + v[0][j]);
    }

    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 1; j < v[i].size(); j++)
        {
            aux[i].push_back((aux[i - 1][j] + aux[i][j - 1]) - aux[i - 1][j - 1] + v[i][j]);
        }
    }

    for (int i = 1; i < n; i++)
    {
        int a = 0, b = 0, c = 0, d = 0;
        for (int j = 1; j < n; j++)
        {
            a = aux[i - 1][j - 1];
            b = aux[i - 1][n - 1] - a;
            c = aux[n - 1][j - 1] - a;
            d = (aux[n - 1][n - 1]) - (b + c + a);
            nooftree = max(nooftree, min(a, min(b, min(c, d))));
        }
    }
    cout << nooftree;

    // print auxilarry matrix for reference
    // for (vector<int> i : aux)
    // {
    //     for (int x : i)
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
}
