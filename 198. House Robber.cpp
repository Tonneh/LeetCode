//
// Created by Tony on 9/24/2022.
//

#include <bits/stdc++.h>

using namespace std;

int rob(vector<int>& nums)
{
    if (nums.size() == 1)
        return nums[0];
    if (nums.size() == 2)
        return max(nums[0], nums[1]);
    vector<int> dp(nums.size(), 0);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    for (int i = 2; i < nums.size(); i++)
        dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
    return dp[dp.size() - 1];
}

int main()
{
    vector<int> nums = {1,2,3,1};
    int res = rob(nums);
    cout << res << endl;

    return 0;
}