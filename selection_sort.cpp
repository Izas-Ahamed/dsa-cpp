#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {-1, -4, -2, 4, 6, 2, 3, 1};
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[min_index] > v[j])
            {
                min_index = j;
            }
        }
        swap(v[min_index], v[i]);
    }
    for (int x : v)
    {
        cout << x << ",";
    }
}
