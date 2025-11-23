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

// any path check

// void print(vector<vector<int>> v)
// {
//        for(int k = 0 ; k < v.size(); k++ ){
//         for(int z = 0; z < v[k].size(); z++){
//             cout<<v[k][z]<< " ";
//         }
//         cout<<endl;
//     }
// }

// bool solve(vector<string> s, vector<vector<int>> &v, int i, int j, int m, int n)
// {
//     if(i==m-1 && j==n-1){
//         v[i][j]=1;
//         print(v);
//         return true;
//     }

//     if(i==v.size() || j==v[0].size() || i<0 || j< 0 || s[i][j]=='X' || v[i][j]==1){
//         cout<<"couldn't find a path"<<" - i: "<<i<<" j: "<<j <<endl;

//         return false;
//     }

//     v[i][j]=1;

//     bool down =  solve(s,v,i+1,j,m,n);
//     if(down) return true;

//     bool right = solve(s,v,i,j+1,m,n);
//     if(right) return true;

//     bool up= solve(s,v,i-1,j,m,n);
//     if(up) return true;

//     bool left = solve(s,v,i,j-1,m,n);
//     if(left) return true;

//     v[i][j]=0;
//     return false;

// }

// void findPath(vector<string> s, int m, int n){
//     vector<vector<int>> v(5,vector<int>(4,0));
//     solve(s, v, 0, 0, m, n);
// }
// int main()
// {
//     // Write C++ code here
//     vector<string> s = {"OXOO",
//                         "OOOX",
//                         "XOXO",
//                         "OOOX",
//                         "XXOO"};
//     findPath(s,1,3);
//     return 0;
// }
