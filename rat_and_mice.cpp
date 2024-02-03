#include <bits/stdc++.h>
using namespace std;

void printArr(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

bool solve(vector<string> &s, vector<vector<int>> &v, int m, int n, int i, int j)
{
    printArr(v);
    cout << endl;
    if (i == m)
    {
        return true;
    }
    if (i == -1 || j == -1 || j == n || s[i][j] == 'X')
        return false;
    // left
    v[i][j] = 1;
    s[i][j] = 'X';
    cout << "check Left: " << endl;
    bool left = solve(s, v, m, n, i, j - 1);
    if (left)
        return true;
    // up
    cout << "check Up: " << endl;

    bool up = solve(s, v, m, n, i - 1, j);
    if (up)
        return true;
    // right
    cout << "check Right: " << endl;

    bool right = solve(s, v, m, n, i, j + 1);
    if (right)
        return true;
    // down
    cout << "check Down: " << endl;

    bool down = solve(s, v, m, n, i + 1, j);
    if (down)
        return true;
    v[i][j] = 0;
    s[i][j] = 'O';
    return false;
}

vector<vector<int>> solver(vector<string> &s)
{
    int m = s.size();
    int n = s[0].size();
    vector<vector<int>> v(m, vector<int>(n, 0));
    solve(s, v, m, n, 0, 0);
    return v;
}

int main()
{
    vector<string> s = {"OXOO",
                        "OOOX",
                        "XOXO",
                        "XOOX",
                        "XXOO"};
    solver(s);
}