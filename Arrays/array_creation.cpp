#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int arr1[n] = {1, 2, 3};
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr1[i] << " ";
    // }
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << *(*(arr + 1) + 2);
    return 0;
}
