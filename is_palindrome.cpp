#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    cin.getline(a, 100);
    bool check = true;

    int s = 0, e = strlen(a) - 1;
    while (s < e)
    {
        if (a[s++] != a[e--])
        {
            check = false;
            break;
        }
    }

    if (check)
    {
        cout << "Palidrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
}
