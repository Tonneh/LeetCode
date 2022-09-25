//
// Created by Tony on 9/24/2022.
//
#include <bits/stdc++.h>

using namespace std;

int rob(vector<int>& nums) {
    if (nums.size() == 1)
        return nums[0];
    if (nums.size() == 2)
        return max(nums[0], nums[1]);
    vector<int> dp1(nums.size(), 0);
    vector<int> dp2(nums.size(), 0);
    // add first num
    dp1[0] = nums[0];
    dp1[1] = max(nums[0], nums[1]);
    // skip first num
    dp2[0] = nums[1];
    dp2[1] = max(nums[1], nums[2]);
    // dp1 skips last num
    for (int i = 2; i < nums.size() - 1; i++)
    {
        dp1[i] = max(nums[i] + dp1[i-2], dp1[i-1]);
        dp2[i] = max(nums[i+1] + dp2[i-2], dp2[i-1]);
    }
    // -2 because we skipped a value
    return max(dp1[dp1.size() - 2], dp2[dp2.size() - 2]);
}

int main()
{
    vector<int> nums = {2,3,2};
    int res = rob(nums);
    cout << res << endl;
    return 0;
}