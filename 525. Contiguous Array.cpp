//
// Created by Tony on 9/22/2022.
//
#include <bits/stdc++.h>

using namespace std;

int findMaxLength(vector<int>& nums) {
    unordered_map<int, int> m;
    int res = 0;
    m[0] = -1;
    int curr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        curr += nums[i] == 0 ? -1 : 1;
        if (!m.count(curr))
            m[curr] = i;
        else
            res = max(res, i - m[curr]);
    }
    return res;
}

int main()
{
    vector<int> nums = {0, 1};
    int res = findMaxLength(nums);
    cout << res << endl;
    return 0;
}