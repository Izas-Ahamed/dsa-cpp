#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A)
{
    if (A.size() == 0)
        return -1;
    int cs = 0;
    int ms = INT_MIN;
    for (int i : A)
    {
        cs += i;
        ms = max(cs, ms);
        if (cs < 0)
        {
            cs = 0;
        }
    }
    return ms;
}

int main()
{
    vector<int> A;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    cout << maxSumSubarray(A) << endl;
    return 0;
}