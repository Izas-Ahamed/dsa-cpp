#include <bits/stdc++.h>
using namespace std;

// pass by reference by reference variable
void increament(int &value)
{
    value = value + 1;
}

// pass by refrence by derefrence operator
void decreament(int *value)
{
    *value = *value - 1;
}

int main()
{
    int totalValue = 1;

    increament(totalValue);
    cout << totalValue << endl; // op: 2

    decreament(&totalValue);
    cout << totalValue; // op: 1
}
