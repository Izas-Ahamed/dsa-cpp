#include <bits/stdc++.h>
using namespace std;
int main()
{

    int sr = 1, sc = 0, er = 3, ec = 0;
    vector<vector<int>> v = {{1, 2, 3, 4, 6},
                             {5, 3, 8, 1, 2},
                             {4, 6, 7, 5, 5},
                             {2, 4, 8, 9, 4}};
    int n = v.size();

    int m = v[0].size();

    vector<vector<int>> aux(n);

    aux[0].push_back(v[0][0]);

    for (int i = 1; i < n; i++)
    {
        aux[i].push_back(v[i][0] + aux[i - 1][0]);
    }

    for (int j = 1; j < m; j++)
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

    // print auxilarry matrix for reference
    //  for (vector<int> i : aux)
    //  {
    //      for (int x : i)
    //      {
    //          cout << x << " ";
    //      }
    //      cout << endl;
    //  }

    if (sr == 0 and sc == 0)
        cout << aux[er][ec];
    else if (sr == 0 and sc > 0)
        cout << aux[er][ec] - (aux[er][sc - 1]);
    else if (sr > 0 and sc == 0)
        cout << aux[er][ec] - (aux[sr - 1][ec]);
    else
        cout << aux[er][ec] - ((aux[sr - 1][ec] + aux[er][sc - 1]) - aux[sr - 1][sc - 1]);
}