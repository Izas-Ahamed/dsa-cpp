#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> nums, int s, int e, int x)
{
    if (s > e)
        return -1;

    int mid = (s + e) / 2;

    if (nums[mid] == x)
        return mid;
    // 4, 5, 6, 0, 1, 2, 3
    if (nums[mid] < x)
    {
        if (nums[e] >= x)
            return binarySearch(nums, mid + 1, e, x);
        return binarySearch(nums, s, mid - 1, x);
    }

    if (nums[mid] > x)
    {
        if (nums[s] <= x)
            return binarySearch(nums, s, mid - 1, x);
        return binarySearch(nums, mid + 1, e, x);
    }
}

int main()
{

    vector<int> nums = {4, 5, 6, 0, 1, 2, 3};
    cout << binarySearch(nums, 0, nums.size() - 1, 33);
}