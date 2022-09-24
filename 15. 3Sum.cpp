//
// Created by Tony on 9/23/2022.
//
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    if (nums[0] > 0)
        return {};
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); i++)
    {
        int l = i + 1;
        int r = nums.size() - 1;
        if (i > 0 && nums[i] == nums[i-1])
            continue;
        while (l < r)
        {
            int total = nums[i] + nums[l] + nums[r];
            if (total == 0)
            {
                res.push_back({nums[i], nums[l], nums[r]});
                l++;
                while (nums[l] == nums[l - 1] && l < r)
                    l++;
            }
            else if (total > 0)
                r--;
            else
                l++;
        }
    }
    return res;
}

int main()
{
    vector<int> v = {-1,0,1,2,-1,-4};
    vector<vector<int>> res;
    res = threeSum(v);
    for (auto i : res)
        for (auto j : i)
            cout << j << endl;
    return 0;
}