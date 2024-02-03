#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {-1, -4, -2, 4, 6, 2, 3, 1};
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int previousElementIndex = i - 1;
        int currentElement = v[i];
        while (previousElementIndex >= 0 and v[previousElementIndex] > currentElement)
        {
            v[previousElementIndex + 1] = v[previousElementIndex];
            previousElementIndex--;
        }
        v[previousElementIndex + 1] = currentElement;
    }
    // for (int x : v)
    // {
    //     cout << x << ",";
    // }
}
