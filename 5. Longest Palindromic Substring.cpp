//
// Created by Tony on 9/24/2022.
//
#include <bits/stdc++.h>

using namespace std;

string longestPalindrome(string s)
{
    string res = "";
    int l;
    int r;
    for (int i = 0; i < s.size(); i++)
    {
        l = i;
        r = i;
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            if (r - l + 1 > res.size())
                res = s.substr(l, r - l + 1);
            l--;
            r++;
        }

        l = i;
        r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            if (r - l + 1 > res.size())
                res = s.substr(l, r - l + 1);
            l--;
            r++;
        }
    }
    return res ;
}

int main()
{
    string s = "babad";
    string res = longestPalindrome(s);
    cout << res << endl;
    return 0;
}