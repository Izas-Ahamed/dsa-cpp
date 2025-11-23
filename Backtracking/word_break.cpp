#include <bits/stdc++.h>
using namespace std;

int helper(string str, vector<string> &dictionary, int i, int j, int n)
{
    if (j == n + 1)
        return 0;
    string ss = str.substr(i, j - i);
    cout << "i: " << i << " j: " << j << " " << ss << endl;
    int count = 0;
    for (int k = 0; k < dictionary.size(); k++)
    {
        if (!ss.compare(dictionary[k]))
        {
            if (j == n)
                return 1;
            count += helper(str, dictionary, j, j + 1, n);
        }
    }
    count += helper(str, dictionary, i, j + 1, n);

    return count;
}

int wordBreak(string str, vector<string> &dictionary)
{
    int n = str.length();
    return helper(str, dictionary, 0, 0, n);
}
int main()
{
    string s = "ilikesamsungmobile";
    vector<string> dict = {
        "i",
        "like",
        "sam",
        "sung",
        "samsung",
        "mobile"};
    cout << wordBreak(s, dict);
}

// void solve(string str, vector<string> dict, vector<string> v, int i) {
//     if(i>=str.length())
//     {   for(string x: v)
//         {
//             cout<<x<<" ";
//         }
//         cout<<endl;
//         return;
//     }

//     for(int y=1;y+i<=str.length();y++)
//     {
//      for(string x: dict){
//         if(str.substr(i,y) == x ){
//             cout<<"subtrign found: "<<str.substr(i,y)<<", i: "<<i<<", y: "<<y<<endl;
//             v.push_back(x);
//             solve(str,dict,v, i+y);
//             v.pop_back();
//         }
//      }
//     }

//     }

// void wordBreak(string str, vector<string> dict)
// {
//     vector<string> v;
//     solve(str, dict, v, 0);
// }
