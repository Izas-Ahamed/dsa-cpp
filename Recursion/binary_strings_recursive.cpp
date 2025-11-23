#include <bits/stdc++.h>
using namespace std;

// f(n) = f(n-1) + f(n-2) - mathematical induction
void helper(vector<string> &ans, int n, string s, int i)
{
    if (i == n - 1)
    {
        cout << "PUSHED: " << s << endl;
        ans.push_back(s);
        return;
    }
    if (s[i] == '0')
    {
        cout << "i: " << i << " s: " << s << endl;
        helper(ans, n, s + "0", i + 1);

        cout << i << endl;
        helper(ans, n, s + "1", i + 1);
    }
    else
    {

        cout << "i: " << i << " s: " << s << endl;
        helper(ans, n, s + "0", i + 1);
    }
}

int main()
{
    int n = 3;
    vector<string> ans;
    helper(ans, n, "0", 0);
    helper(ans, n, "1", 0);
    for (string s : ans)
    {
        cout << s << endl;
    }
}
