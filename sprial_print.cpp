#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[][3] = {
        {1,2,3},
         {4,5,6},
        {7,8,9}};
    int n = 4, m = 3;
    int xs = 0, ys = 0, ln = n * m;
    int x = 0, y = 0;

    int u = 0, d = 0, r = 1, l = 0;
    while (ln--)
    {

        if (r)
        {
            cout << a[x][y] << " ";
            y++;
            if (y == n)
            {
                r = 0;
                d = 1;
                y--;
                xs++;
                x++;
            }
        }

        else if (d)
        {
            cout << a[x][y] << " ";
            x++;
            if (x == m)
            {
                d = 0;
                l = 1;
                x--;
                y--;
                n--;
            }
        }

        else if (l)
        {
            cout << a[x][y] << " ";
            y--;
            if (y == ys - 1)
            {
                u = 1;
                l = 0;
                x--;
                m--;
                ys++;
                y++;
            }
        }

        else if (u)
        {
            cout << a[x][y] << " ";
            x--;
            if (x == xs - 1)
            {
                x++;
                u = 0;
                r = 1;
                ys++;
                y++;
            }
        }
    }
}
