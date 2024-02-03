#include <bits/stdc++.h>
using namespace std;

int main()
{

    bitset<10> b;
    int arr[] = {6, 1, 3, 2};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    b[0] = 1;
    for (int i = 0; i < arrSize; i++)
    {

        b |= b << arr[i];
        cout << b << endl;
    }
    cout << b[n];
}
