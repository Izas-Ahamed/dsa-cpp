#include <bits/stdc++.h>
using namespace std;

void permute(string &word, int i)
{
    if (i == word.length())
    {
        cout << word << endl;
        return;
    }

    for (int k = i; k < word.length(); k++)
    {
        swap(word[i], word[k]);
        permute(word, i + 1);
        swap(word[i], word[k]);
        // cout << "reswap: " << word << endl;
    }
}

int main()
{
    string word = "abc";
    permute(word, 0);
}
