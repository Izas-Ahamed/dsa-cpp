#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int s, int e)
{
    vector<int> temp;
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;

    // cout << nums[i] << " - " << nums[j] << endl;

    while (i <= mid && j <= e)
    {
        if (nums[i] > nums[j])
        {
            temp.push_back(nums[j]);
            j++;
            // cout << "if" << endl;
        }
        else
        {
            temp.push_back(nums[i]);
            i++;
            // cout << "else" << endl;
        }
    }
    for (int k = i; k <= mid; k++)
    {
        temp.push_back(nums[k]);
    }
    for (int k = j; k <= e; k++)
    {
        temp.push_back(nums[k]);
    }
    // for (int i : nums)
    // {
    //     cout << i << " ";
    // }
    // cout << endl
    //      << "temp: ";
    // for (int i : temp)
    // {
    //     cout << i << " ";
    // }
    // cout << endl
    //      << endl;
    int k = 0;
    for (int i = s; i <= e; i++)
    {
        nums[i] = temp[k++];
    }
}

void mergeSort(vector<int> &nums, int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    mergeSort(nums, s, mid);
    mergeSort(nums, mid + 1, e);
    merge(nums, s, e);
}

int main()
{

    vector<int> nums = {3, 5, 4, 6, 7};
    mergeSort(nums, 0, nums.size() - 1);
    for (int i : nums)
    {
        cout << i << " ";
    }
}