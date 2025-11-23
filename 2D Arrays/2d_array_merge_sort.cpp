#include <bits/stdc++.h>
using namespace std;

void rowSort(vector<vector<int>> &nums, int rs, int re, int cs, int ce)
{
    vector<int> temp;
    int mid = (cs + ce) / 2;
    int i = cs;
    int j = mid + 1;

    while (i <= mid && j <= ce)
    {
        if (nums[rs][i] < nums[rs][j])
        {
            temp.push_back(nums[rs][i]);
            i++;
        }
        else
        {
            temp.push_back(nums[rs][j]);
            j++;
        }
    }
    for (int k = i; k <= mid; k++)
    {
        temp.push_back(nums[rs][k]);
    }
    for (int k = j; k <= ce; k++)
    {

        temp.push_back(nums[rs][k]);
    }
    int k = 0;
    for (int i = cs; i <= ce; i++)
    {
        nums[rs][i] = temp[k++];
    }

    // cout << "row" << endl;

    // for (vector<int> v : nums)
    // {
    //     for (int i : v)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
}
void colSort(vector<vector<int>> &nums, int rs, int re, int cs, int ce)
{
    vector<int> temp;
    int mid = (rs + re) / 2;
    int i = rs;
    int j = mid + 1;

    while (i <= mid && j <= re)
    {

        if (nums[i][cs] < nums[j][cs])
        {
            temp.push_back(nums[i][cs]);
            i++;
        }
        else
        {
            temp.push_back(nums[j][cs]);
            j++;
        }
    }
    for (int k = i; k <= mid; k++)
    {
        temp.push_back(nums[k][cs]);
    }
    for (int k = j; k <= re; k++)
    {
        temp.push_back(nums[k][cs]);
    }

    int k = 0;
    for (int i = rs; i <= re; i++)
    {
        nums[i][cs] = temp[k++];
    }

    // cout << "col" << endl;
    // for (vector<int> v : nums)
    // {
    //     for (int i : v)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
}

void merge(vector<vector<int>> &nums, int rs, int re, int cs, int ce)
{
    // cout << "rs:" << rs << " re:" << re << " cs:" << cs << " ce:" << ce << endl;

    for (int i = rs; i <= re; i++)
    {
        rowSort(nums, i, re, cs, ce);
    }

    for (int i = cs; i <= ce; i++)
    {

        colSort(nums, rs, re, i, ce);
    }
}

void mergeSort(vector<vector<int>> &nums, int rs, int re, int cs, int ce)
{
    if (rs >= re && cs >= ce)
        return;
    int rowMid = (rs + re) / 2;
    int colMid = (cs + ce) / 2;
    mergeSort(nums, rs, rowMid, cs, colMid);
    mergeSort(nums, rowMid + 1, re, cs, colMid);
    mergeSort(nums, rs, rowMid, colMid + 1, ce);
    mergeSort(nums, rowMid + 1, re, colMid + 1, ce);
    merge(nums, rs, re, cs, ce);
}

int main()
{
    vector<vector<int>> nums = {{18, 4, 16, 8},
                                {23, 13, 20, 11},
                                {28, 24, 26, 25},
                                {1, 30, 15, 19}};
    int m = 4, n = 4;
    mergeSort(nums, 0, m - 1, 0, n - 1);
    for (vector<int> v : nums)
    {
        for (int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}