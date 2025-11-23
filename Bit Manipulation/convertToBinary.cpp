#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 9;
    int ans = 0;
    int pw = 1;
    while (n > 0)
    {
        int last_bit = n & 1;
        ans += pw * last_bit;

        pw = pw * 10;
        n = n >> 1;
    }
    cout << ans;
}
