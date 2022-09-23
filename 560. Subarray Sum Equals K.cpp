//
// Created by Tony on 9/22/2022.
//
#include <bits/stdc++.h>

using namespace std;

int subarraySum(vector<int>& nums, int k)
{
    unordered_map<int, int> m;
    int res = 0;
    int curr = 0;
    m[0] = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        curr += nums[i];
        res += m[curr - k];
        m[curr]++;
    }
    return res;
}

int main()
{
    vector<int> test = {1, 1, 1};
    int k = 2;
    int res = subarraySum(test, k);
    cout << res << endl;
    return 0;
}