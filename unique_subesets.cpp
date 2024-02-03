#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &nums, vector<vector<int>> &v, vector<int> &res, int i)
{
    if (i == nums.size())
    {
        v.push_back(res);
        for (int i : res)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    res.push_back(nums[i]);
    cout << "left";
    for (int i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    helper(nums, v, res, i + 1);
    res.pop_back();
    cout << "right";
    for (int i : res)
    {
        cout << i << " ";
    }
    cout << endl;
    helper(nums, v, res, i + 1);
}

vector<vector<int>> uniqueSubsets(vector<int> nums)
{

    vector<vector<int>> v;
    vector<int> res;
    helper(nums, v, res, 0);
    set<vector<int>> s(v.begin(), v.end());
    v.clear();
    for (auto x : s)
    {

        v.push_back(x);
    }

    return v;
}

int main()
{
    vector<int> nums = {1, 2, 2};

    // for (vector<int> v : uniqueSubsets(nums))
    // {
    //     for (int i : v)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
    uniqueSubsets(nums);
}