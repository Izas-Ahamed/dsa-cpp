#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 12, y = 25, mod = 10007;
    int ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {

            ans = ans * x % mod;
            cout << "ans: " << ans << endl;
        }
        x = x * x % mod;
        cout << "x: " << x << endl;
        y = y >> 1;
    }
    cout << ans << endl;
    cout << ans % mod;
}