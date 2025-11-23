#include <bits/stdc++.h>

using namespace std;

void mergeCol(vector<vector<int>> &v, int sr, int er, int sc, int ec)
{

    vector<int> temp;

    cout << "col: " << "sr:" << sr << " er:" << er << " sc:" << sc << " ec:" << ec << endl;
    for (int k = sr; k <= er; k++)
    {
        int i = sc;
        int mid = (sc + ec) / 2;
        int j = mid + 1;
        while (i <= mid and j <= ec)
        {
            if (v[k][i] > v[k][j])
            {
                temp.push_back(v[k][j]);
                j++;
            }
            else
            {
                temp.push_back(v[k][i]);
                i++;
            }
        }

        for (int z = i; z <= mid; z++)
        {
            temp.push_back(v[k][z]);
        }

        for (int z = j; z <= ec; z++)
        {
            temp.push_back(v[k][z]);
        }
    }

    int x = 0;
    for (int k = sr; k <= er; k++)
    {
        for (int z = sc; z <= ec; z++)
            v[k][z] = temp[x++];
    }
    cout << "-coltemp: ";
    for (int k : temp)
    {
        cout << k << ", ";
    }
    cout << endl;
}

void mergeRow(vector<vector<int>> &v, int sr, int er, int sc, int ec)
{

    vector<int> temp;

    cout << "row: " << "sr:" << sr << " er:" << er << " sc:" << sc << " ec:" << ec << endl;

    for (int k = sc; k <= ec; k++)
    {
        int i = sr;
        int mid = (sr + er) / 2;
        int j = mid + 1;
        while (i <= mid and j <= er)
        {
            if (v[i][k] > v[j][k])
            {
                temp.push_back(v[j][k]);
                j++;
            }
            else
            {
                temp.push_back(v[i][k]);
                i++;
            }
        }

        for (int x = i; x <= mid; x++)
        {
            temp.push_back(v[x][k]);
        }

        for (int x = j; x <= er; x++)
        {
            temp.push_back(v[x][k]);
        }
    }

    int x = 0;

    for (int k = sc; k <= ec; k++)
    {
        for (int z = sr; z <= er; z++)
            v[z][k] = temp[x++];
    }
    cout << "-rowtemp: ";
    for (int k : temp)
    {
        cout << k << ", ";
    }
    cout << endl;
}

void mergesort(vector<vector<int>> &v, int sr, int er, int sc, int ec)
{
    if (sr >= er || sc >= ec)
    {
        return;
    }
    int mid = (sr + er) / 2;

    mergesort(v, sr, mid, sc, mid);
    mergesort(v, mid + 1, er, sc, mid);
    mergesort(v, sr, mid, mid + 1, er);
    mergesort(v, mid + 1, er, mid + 1, ec);

    mergeCol(v, sr, er, sc, ec);
    mergeRow(v, sr, er, sc, ec);
    //  for (int x = 0; x < v.size(); x++) {

    //     for (int y: v[x])
    //     {
    //         cout << y << ",";
    //     }
    //     cout << endl;
    // }
}

int main()
{
    vector<vector<int>> v = {
        {18, 9, 11},
        {1, 4, 15},
        {13, 20, 23}};

    int n = v.size() - 1;
    int e = v[0].size() - 1;
    mergesort(v, 0, n, 0, e);
    for (int x = 0; x < v.size(); x++)
    {

        for (int y : v[x])
        {
            cout << y << ",";
        }
        cout << endl;
    }
}