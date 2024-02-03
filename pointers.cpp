#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int *ptr = &x;
    // address of x
    cout << &x << endl;
    // address to x
    cout << ptr << endl;
    // dereference
    *ptr = *ptr + 1;
    cout << *ptr << endl;
    // same as ^
    cout << *&x << endl;
    // null pointer
    int *p = NULL;
    int *q = 0;
    cout << q << " " << p << endl;
    // deferenecing this gives segmentation fault due to no address found
    // cout << *p << endl;
    // reference vairable
    int a = 10;
    // reference variable must be initalized when declaring it
    int &b = a;
    b++;
    a++;
    cout << a << " " << b;
}
