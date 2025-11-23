#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    // your code goes here
    if (A[0] > Val)
        return -1;
    int n = A.size();
    int s = 0, e = n - 1;
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (A[mid] == Val)
        {
            return A[mid];
        }
        else if (A[mid] > Val)
        {
            e = mid - 1;
        }
        else if (A[mid] < Val)
        {
            s = mid + 1;
            ans = A[mid];
        }
    }
    return ans;
}

int main()
{
    vector<int> A;
    int n, Val;
    cin >> n >> Val;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    cout << lowerBound(A, Val) << endl;
    return 0;
}