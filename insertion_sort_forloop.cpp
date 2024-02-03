#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {-1, -4, -2, 4, 6, 2, 3, 1};
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int ce = v[i];
        for (int j = i - 1; j >= 0; j--)
        {
            int changed = false;
            if (v[j] > ce)
            {
                v[j + 1] = v[j];
                changed = true;
            }
            else
            {

                break;
            }
            if (changed)
            {

                v[j] = ce;
            }
        }
    }
    // for (int x : v)
    // {
    //     cout << x << ",";
    // }
}
