#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &nums, int s, int e)
{
    if (s >= e)
        return;

    int i = s - 1, j = s;

    while (j < e)
    {
        if (nums[j] < nums[e])
        {
            i++;
            swap(nums[i], nums[j]);
        }
        j++;
    }
    swap(nums[i + 1], nums[e]);
    cout << "i:" << i << endl;
    for (int i : nums)
    {
        cout << i << " ";
    }

    cout << endl;
    quickSort(nums, 0, i);
    quickSort(nums, i + 1, e);
}

int main()
{

    vector<int> nums = {3, 4, 1, 5, 6};
    quickSort(nums, 0, nums.size() - 1);
    for (int i : nums)
    {
        cout << i << " ";
    }
}