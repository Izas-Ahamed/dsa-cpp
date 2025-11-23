#include <bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int subPower = power(a, n / 2);
    int subPowerSq = subPower * subPower;
    if (n & 1)
    {
        return a * subPowerSq;
    }
    return subPowerSq;
}

int main()
{
    int a = 2, n = 10;
    cout << power(a, n);
}