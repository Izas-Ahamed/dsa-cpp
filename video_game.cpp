#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &coins, int n)
{

    int ans = INT_MIN;
    vector<int> prec;
    prec.push_back(coins[0]);
    for (int i = 1; i < n; i++)
    {
        if (coins[i])
        {

            prec.push_back(prec[i - 1] + 1);
        }
        else
        {
            prec.push_back(prec[i - 1] - 1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int a = i == 0 ? 0 : prec[i], b = i == 0 ? prec[n - 1] : prec[i - 1] - prec[n - 1];
        cout << "a:" << a << " b: " << b << endl;
        if (a > b)
        {
            if (a > ans)
            {
                ans = a;
                break;
            }
        }
    }

    //     for (int i = 0; i < n; i++)
    //     {
    //         int a = 0, b = 0;

    //         for (int j = 0; j < i; j++)
    //         {
    //             if (coins[j])
    //             {
    //                 a++;
    //             }
    //             else
    //             {
    //                 a--;
    //             }
    //         }
    //         for (int k = i; k < n; k++)
    //         {
    //             if (coins[k])
    //             {
    //                 b++;
    //             }
    //             else
    //             {
    //                 b--;
    //             }
    //         }
    //         cout << "a:" << a << " b: " << b << endl;
    //         if (a > b)
    //         {
    //             if (a > ans)
    //             {
    //                 ans = a;
    //                 break;
    //             }
    //         }
    //     }
    return ans;
}
int main()
{
    vector<int> coins = {1, 0, 0, 1, 0};
    int n = 5;
    cout << solve(coins, n);
}