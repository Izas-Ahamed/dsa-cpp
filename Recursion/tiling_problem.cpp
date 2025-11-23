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

int countWays(int n, int m)
{

    // table to store values
    // of subproblems
    int count[n + 1];
    count[0] = 0;

    // Fill the table upto value n
    for (int i = 1; i <= n; i++)
    {

        // recurrence relation
        if (i > m)
            count[i] = count[i - 1] + count[i - m];

        // base cases and for i = m = 1
        else if (i < m || i == 1)
            count[i] = 1;

        // i = = m
        else
            count[i] = 2;
    }

    for (int x : count)
    {
        cout << x << " ";
    }

    // required number of ways
    return count[n];
}

int main()
{
    int N = 4, M = 3;

    cout << ways(N, M) << endl; // recursive
    cout << countWays(N, M);    // for-loop
}