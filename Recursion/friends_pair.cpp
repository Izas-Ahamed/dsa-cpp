#include <bits/stdc++.h>
using namespace std;
int friendsPairing(int n)
{
    if (n < 2)
    {
        return 1;
    }
    int n1 = friendsPairing(n - 1);
    int n2 = (n - 1) * friendsPairing(n - 2);
    cout << "n1: " << n1 << " n2: " << n2 << endl;
    return n1 + n2;
}

int main()
{
    int n = 3;
    cout << "no of ways to pair: " << friendsPairing(n) << endl;

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans += n - i;
    }
    cout << ans + 1;
}