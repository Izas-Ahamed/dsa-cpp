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
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = st; j < ed; j++)
        {
            temp = v[st][j];
            v[st][j] = v[j][ed];
            v[j][ed] = temp;
            cout << "st:" << st << " j:" << j << " ed:" << ed << endl;

            for (vector<int> x : v)
            {
                for (int y : x)
                {
                    cout << y << ", ";
                }
                cout << endl;
            }
            cout << endl;
            temp = v[st][j];
            v[st][j] = v[ed][st + ed - j];
            v[ed][st + ed - j] = temp;
            cout << "st:" << st << " j:" << j << " ed:" << ed << endl;
            for (vector<int> x : v)
            {
                for (int y : x)
                {
                    cout << y << ", ";
                }
                cout << endl;
            }
            cout << endl;

            temp = v[st + ed - j][st];
            v[st + ed - j][st] = v[st][j];
            v[st][j] = temp;

            for (vector<int> x : v)
            {
                for (int y : x)
                {
                    cout << y << ", ";
                }
                cout << endl;
            }
            cout << endl;
        }
        st++;
        ed--;
    }
}
