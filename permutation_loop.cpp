#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word = "abc";
    for (int i = 0; i < word.length(); i++)
    {
        cout << word[i];
        for (int j = 0; j < word.length(); j++)
        {
            if (j != i)
                cout << word[j];
        }
        cout << endl;
    }
    for (int i = word.length() - 1; i >= 0; i--)
    {
        cout << word[i];
        for (int j = word.length() - 1; j >= 0; j--)
        {
            if (j != i)
                cout << word[j];
        }
        cout << endl;
    }
}
