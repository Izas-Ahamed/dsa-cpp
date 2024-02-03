#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    if ((n & n - 1) == 0)
    {
        cout << n << " is Power  2";
    }
    else
    {
        cout << "not power of 2";
    }
}
