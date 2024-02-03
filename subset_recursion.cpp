#include <bits/stdc++.h>
using namespace std;

void solver(char *arr, int i, int j, char *out)
{
    if (arr[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    out[j] = arr[i];

    solver(arr, i + 1, j + 1, out);
    solver(arr, i + 1, j, out);
}

void solve(char *arr)
{
    char out[3];
    solver(arr, 0, 0, out);
    cout << out;
}

int main()
{
    char arr[] = {'a', 'b', 'c', '\0'};
    solve(arr);
}
