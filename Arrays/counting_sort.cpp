#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> v = {5, 3, 2, 12, 4, 5, 3, 2, 1};
    // int n = v.size();
    // int largestElement = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     largestElement = max(largestElement, v[i]);
    // }

    // int arr[largestElement + 1] = {0};

    // for (int i = 0; i < n; i++)
    // {
    //     arr[v[i]]++;
    // }

    // int j = 0;

    // for (int i = 0; i < largestElement; i++)
    // {
    //     while (arr[i] > 0)
    //     {
    //         v[j] = i;
    //         arr[i]--;
    //         j++;
    //     }
    // }
    // for (int x : v)
    // {
    //     cout << x << ",";
    // }

    // Negative number handling
    vector<int> v = {-5, 0, -12, 12, -3, 2, 1};
    int n = v.size();
    int largestElement = INT_MIN;
    int smallestElement = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        largestElement = max(largestElement, v[i]);
        smallestElement = min(smallestElement, v[i]);
    }
    int range = largestElement - smallestElement + 1;
    vector<int> freq(range, 0);
    for (int i = 0; i < n; i++)
    {
        freq[abs(smallestElement) - v[i]]++;
    }

    int j = 0;
    for (int i = 0; i < range; i++)
    {
        while (freq[i]-- > 0)
        {
            v[j] = i + smallestElement;
            j++;
        }
    }
    for (int x : v)
    {
        cout << x << ",";
    }
}