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

    int n = v.size();
    int nooftree = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int a = 0, b = 0, c = 0, d = 0;

            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    if (k < i and l < j)
                    {
                        if (v[k][l] == 1)
                        {
                            a++;
                        }
                    }
                    else if (k < i and l >= j)
                    {
                        if (v[k][l] == 1)
                        {
                            b++;
                        }
                    }
                    else if (k >= i and l < j)
                    {
                        if (v[k][l] == 1)
                        {
                            c++;
                        }
                    }
                    else if (k >= i and l >= j)
                    {
                        if (v[k][l] == 1)
                        {
                            d++;
                        }
                    }
                }
            }

            nooftree = max(nooftree, min(a, min(b, min(c, d))));
        }
    }
    cout << nooftree;
}
