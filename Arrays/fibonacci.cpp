#include <bits/stdc++.h>
using namespace std;

int main()
{
    int value;
    cin >> value;

    int array[] = {2, 4};

    for (int i = 2; i <= value; i++)
    {
        int temp = array[1];
        array[1] = array[1] + array[0];
        array[0] = temp;
        cout << "{" << array[0] << "," << array[1] << "}" << endl;
    }
    cout << array[1];
}