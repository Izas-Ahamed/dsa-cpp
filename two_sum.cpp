#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        map[target - nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (map[nums[i]])
        {
            ans.push_back(i);
            ans.push_back(map[nums[i]]);
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {3, 2, 4};
    int n = 3;

    vector<int> v = twoSum(nums, 6);
    for (int x : v)
    {
        cout << x << " ";
    }
}