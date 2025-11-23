#include <bits/stdc++.h>
using namespace std;
int main()
{
    // -10, 2, 12, -5, 5, 3, 2, 1
    vector<int> v = {8, 22, 7, 9, 31, 19, 5, 13};
    int n = v.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                count++;
                for (int x : v)
                {
                    cout << x << ",";
                }
                cout << endl;
            }
        }
    }
    for (int x : v)
    {
        cout << x << ",";
    }
    cout << "count: " << count << endl;
}