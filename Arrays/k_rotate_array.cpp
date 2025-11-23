#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    int n = a.size();
    k = k % n;

    for (int i = 0; i < k; i++)
    {
        a.insert(a.begin(), a[a.size() - 1]);
        a.pop_back();
    }
    return a;
}

int main()
{
    vector<int> a;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> ans = kRotate(a, k);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
