#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v = {{5, 1, 9, 11},
                             {2, 4, 8, 10},
                             {13, 3, 6, 7},
                             {15, 14, 12, 16}};

    /*
       { 15, 13, 2, 5 },
       { 14, 3, 4, 1 },
       { 12, 6, 8, 9 },
       { 16, 7, 10, 11 } */

    int x = 0,
        y = 0;
    int n = v.size();
    int st = 0;
    int ed = n - 1;
    int t = n;

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < ed - st; j++)
        {
            cout << "st:" << st << " ed:" << ed << " j:" << j << endl;
            swap(v[st][st + j], v[st + j][ed]);
            for (vector<int> x : v)
            {
                for (int y : x)
                {
                    cout << y << ", ";
                }
                cout << endl;
            }
            cout << endl;

            swap(v[st][st + j], v[ed][ed - j]);
            for (vector<int> x : v)
            {
                for (int y : x)
                {
                    cout << y << ", ";
                }
                cout << endl;
            }
            cout << endl;

            swap(v[st][st + j], v[ed - j][st]);
            for (vector<int> x : v)
            {
                for (int y : x)
                {
                    cout << y << ", ";
                }
                cout << endl;
            }

            cout << "end of swap" << endl
                 << endl;
        }

        st++;
        ed--;
        cout << "end of rotation" << i << endl;
        cout << endl;
    }
}
