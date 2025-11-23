#include <iostream>
using namespace std;

int **create2DArray(int n, int m)
{
    int **arr = new int *[n];
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];

        for (int j = 0; j < m; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }
    return arr;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = create2DArray(n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // releasing memory
    delete[] arr;
    return 0;
}