#include <bits/stdc++.h>
using namespace std;

void isOddEven(int n)
{
    int res = 1 & n;
    cout << n << " IS ";
    if (res)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "EVEN" << endl;
    }
}

void getIthBit(int n, int i)
{
    int mask = 1 << i;
    int ans = n & mask;
    cout << "iTH Bit: ";
    if (ans > 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

void setIthBit(int n, int i)
{

    int mask = 1 << i;
    n = n | mask;
    cout << "AFTER SETTING iTH BIT: " << n << endl;
}

void clearIthBit(int n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
    cout << "AFTER CLEARING iTH BIT: " << n << endl;
}

void updateIthBit(int n, int i, int v)
{

    int mask = 1 << i;
    n = n & (~mask);
    n = n | v << i;
    cout << "AFTER UPDATING BIT : " << n << endl;
}

void clearBitsInRange(int n, int i, int j)
{
    int mask = ~0 << j + 1;
    // mask = mask | ~(~0 << i ); or we can do
    mask = mask | (1 << i) - 1;
    n = n & mask;
    cout << "AFTER CLEARING BITS IN RANGE: " << n << endl;
}

int main()
{
    isOddEven(2);
    getIthBit(5, 2);
    setIthBit(5, 1);
    clearIthBit(5, 2);
    updateIthBit(5, 1, 1);
    clearBitsInRange(15, 0, 1);
}
