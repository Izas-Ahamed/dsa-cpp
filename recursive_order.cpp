#include <bits/stdc++.h>
using namespace std;
int printDec2(int n, int i)
{

    if (i == n)
    {
        return i;
    }

    cout << printDec2(n, i + 1) << " ";
    return i;
}
void printDec(int n)
{
    if (n == 0)
    {
        return;
    }
    // towards the base case
    cout << n << " ";
    printDec(n - 1);
}

void printInc(int n)
{
    if (n == 0)
    {
        return;
    }
    printInc(n - 1);
    cout << n << " ";
}

int main()
{
    printDec(5);
    cout << endl;
    printInc(5);
    cout << endl;
    printDec2(5, 0);
}