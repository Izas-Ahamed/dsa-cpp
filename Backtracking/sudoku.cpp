#include <bits/stdc++.h>
using namespace std;

void printArr(int a[][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

bool checker(int a[][9], int i, int j, int n, int v)
{

    // col/row check
    for (int k = 0; k < n; k++)
    {
        if (a[i][k] == v || a[k][j] == v)
            return false;
    }

    int c = 0, cn = 3, r = 0, rn = 3;

    if (j > 2 && j < 6)
        c = 3, cn = 6;
    else if (j > 5 && j < 9)
        c = 6, cn = 9;

    if (i > 2 && i < 6)
        r = 3, rn = 6;
    else if (i > 5 && i < 9)
        r = 6, rn = 9;

    // cout << "r:  " << r << " c: " << c << " rn: " << rn << " cn: " << cn << endl;
    for (int x = r; x < rn; x++)
    {
        for (int y = c; y < cn; y++)
        {
            if (a[x][y] == v)
            {
                // cout << "false on " << x << " " << y << endl;
                return false;
            }
        }
    }
    return true;
}

bool solve(int a[][9], int i, int j, int n)
{
    if (i == n)
    {
        printArr(a);
        return true;
    }

    if (a[i][j] > 0)
        return solve(a, i, j + 1, n);
    for (int k = 1; k <= n; k++)
    {
        // cout << "i: " << i << " j: " << j << " k: " << k << endl;
        // printArr(a);
        if (checker(a, i, j, n, k))
        {
            a[i][j] = k;
            // printArr(a);
            bool ans = solve(a, i, j + 1, n);
            if (ans)
                return true;
            a[i][j] = 0;
        }
    }
    return false;
}
int main()
{
    int n = 9;
    int a[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    cout << solve(a, 0, 0, n);
    // cout << a[0][0];

    // cout << checker(a, 3, 1, 9, 2);
}

// void print(int a[][9])
// {
//     for (int i = 0; i < 9; i++)
//     {
//         for (int y = 0; y < 9; y++)
//         {
//             cout << a[i][y] << " ";
//         }
//         cout << endl;
//     }
// }

// bool check(int a[][9], int i, int j, int n, int v)
// {

//     for (int k = 0; k < n; k++)
//     {
//         if (a[k][j] == v || a[i][k] == v)
//             return false;
//     }

//     // self block check
//     int sx = (i / 3) * 3;
//     int sy = (j / 3) * 3;
//     for (int x = sx; x < sx + 3; x++)
//     {
//         for (int y = sy; y < sy + 3; y++)
//         {
//             if (a[x][y] == v)
//                 return false;
//         }
//     }

//     return true;
// }

// bool solveSudoku(int a[][9], int i, int j, int n)
// {
//     if (i == n && j == 0)
//     {
//         print(a);
//         return true;
//     }

//     if (j == n)
//     {
//         return solveSudoku(a, i + 1, 0, n);
//     }

//     if (a[i][j] != 0)
//     {
//         return solveSudoku(a, i, j + 1, n);
//     }

//     for (int k = 1; k <= n; k++)
//     {
//         if (check(a, i, j, n, k))
//         {
//             a[i][j] = k;
//             bool flag = solveSudoku(a, i, j + 1, n);
//             if (flag)
//                 return true;
//         }
//     }

//     a[i][j] = 0;
//     return false;
// }

// int main()
// {
//     // Write C++ code here
//     int a[9][9] =
//         {{5, 3, 0, 0, 7, 0, 0, 0, 0},
//          {6, 0, 0, 1, 9, 5, 0, 0, 0},
//          {0, 9, 8, 0, 0, 0, 0, 6, 0},
//          {8, 0, 0, 0, 6, 0, 0, 0, 3},
//          {4, 0, 0, 8, 0, 3, 0, 0, 1},
//          {7, 0, 0, 0, 2, 0, 0, 0, 6},
//          {0, 6, 0, 0, 0, 0, 2, 8, 0},
//          {0, 0, 0, 4, 1, 9, 0, 0, 5},
//          {0, 0, 0, 0, 8, 0, 0, 7, 9}};

//     solveSudoku(a, 0, 0, 9);
//     return 0;
// }
