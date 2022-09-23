//
// Created by Tony on 9/23/2022.
//
#include <bits/stdc++.h>

using namespace std;

// Use two pointers
// start right at the end of array, and left at beginning
// add them together, if total is equal to target then return the pointers + 1
// if the number is greater than target, then decrement right by one or increment left if number is smaller
vector<int> twoSum(vector<int>& numbers, int target) {
    int l = 0;
    int r = numbers.size() - 1;
    while (l <= r)
    {
        int num = numbers[l] + numbers[r];
        if (num == target)
            return {l+1, r+1};
        else if (num > target)
            r--;
        else
            l++;
    }
    return {};
}
int main()
{
    vector<int> v;
    vector<int> nums = {2, 7, 11, 15};
    v = twoSum(nums, 9);
    for (auto i : v)
        cout << i << endl;
    return 0;
}