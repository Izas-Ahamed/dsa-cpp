#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aabccdee";
    string ans;
    int i = 0;
    int count = 1;
    while (s[i] != '\0')
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            if (count > 1)
            {

                ans += s[i] + to_string(count);
            }
            else
            {
                ans += s[i];
            }
            count = 1;
        }
        i++;
    }
    cout << ans;
}
