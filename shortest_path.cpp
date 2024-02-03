#include <bits/stdc++.h>
using namespace std;
int main()
{
    char paths[] = "SNNNEWE";
    int S = 0, W = 0, N = 0, E = 0;
    int i = 1;
    char path = paths[0];
    while (path != '\0')
    {
        switch (path)
        {
        case 'S':
            N--;
            S++;
            break;
        case 'N':
            N++;
            S--;
            break;
        case 'W':
            W++;
            E--;
            break;
        case 'E':
            E++;
            W--;
            break;
        }
        path = paths[i++];
    }
    while (S > 0)
    {
        cout << 'S';
        S--;
    }
    while (W > 0)
    {
        cout << 'W';
        W--;
    }
    while (N > 0)
    {
        cout << 'N';
        N--;
    }
    while (E > 0)
    {
        cout << 'E';
        E--;
    }
}