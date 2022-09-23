//
// Created by Tony on 9/22/2022.
//
#include <bits/stdc++.h>

using namespace std;

int characterReplacement(string s, int k) {
    int res = 0;
    int l = 0;
    unordered_map<int, int> m;

    int maxnum = 0;
    for (int r = 0; r < s.size(); r++)
    {
        m[s[r]]++;
        maxnum = max(maxnum, m[s[r]]);
        while ((r - l + 1) - maxnum > k)
        {
            m[s[l]]--;
            l++;
        }
        res = max(res, r - l + 1);
    }
    return res;
}
int main()
{
    string s = "ABAA";
    int res = characterReplacement(s, 0);
    cout << res << endl;
    return 0;
}