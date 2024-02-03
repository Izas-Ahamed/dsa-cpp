
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{5, 1, 9, 11},
                               {2, 0, 8, 10},
                               {13, 3, 1, 7},
                               {15, 14, 12, 0}};

    vector<pair<int, int>> v;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == 0)
                v.push_back({i, j});
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            arr[j][v[i].second] = 0;
            arr[v[i].first][j] = 0;
        }
    }
    for (vector<int> x : arr)
    {
        for (int y : x)
        {
            cout << y << ", ";
        }
        cout << endl;
    }
}
