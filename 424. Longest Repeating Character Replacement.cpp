//
// Created by Tony on 9/22/2022.
//
#include <bits/stdc++.h>

using namespace std;

// We can solve this problem using a hashmap and sliding window techqnie
// We have a left and a right pointer
// store the character and increment it
// after that we need to get the max number in the map,
// then we check, if the size of the current window minus the max value in the map is greater than k
// that means that we used up all the replacements, so we have to shift the left pointer until the condition is satisified
// then we can update the result with the length of the window
int characterReplacement(string s, int k)
{
    int res = 0;
    int l = 0;
    unordered_map<char, int> m;
    int maxnum = 0;
    for (int r = 0; r < s.size(); r ++)
    {
        m[s[r]] ++;
        maxnum = max(maxnum, m[s[r]]);
        while ((r - l + 1) - maxnum > k)
        {
            m[s[l]] --;
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