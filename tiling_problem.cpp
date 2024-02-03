#include <bits/stdc++.h>
using namespace std;
int ways(int n, int m)
{
    if (n < m)
    {
        return 1;
    }
    return ways(n - 1, m) + ways(n - m, m);
}
int main()
{
    int N = 4, M = 2;

    cout << ways(N, M);
}