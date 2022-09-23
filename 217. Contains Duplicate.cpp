//
// Created by Tony on 9/22/2022.
//

#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> s;
    for (auto i : nums)
    {
        if (s.count(i))
            return true;
        s.insert(i);
    }
    return false;
}

int main()
{
    vector<int> nums = {1,2,3,1};
    bool ans = containsDuplicate(nums);
    cout << ans << endl;
    return 0;
}