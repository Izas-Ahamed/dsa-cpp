#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 8;
    int ans = 0;
    while (n > 0)
    {
        n = n & n - 1;
        ans++;
    }
    cout << "Total set bits: " << ans;
}
