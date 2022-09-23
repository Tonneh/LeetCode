//
// Created by Tony on 9/22/2022.
//
#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    int res = 0;
    int l = 0;
    unordered_set<char> set;

    // loop through keeping a right pointer
    for (int r = 0; r < s.size(); r++)
    {
        // while we encounter a repeating character
        // we move the left pointer to the right,
        // deleting the element at the left pointer
        while (set.count(s[r]) && l <= r)
        {
            set.erase(s[l]);
            l++;
        }
        res = max(res, r - l + 1);
        set.insert(s[r]);
    }
    return res;
}


int main()
{
    int test = lengthOfLongestSubstring("pwwkew");
    cout << test << endl;
    return 0;
}