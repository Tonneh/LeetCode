//
// Created by Tony on 9/24/2022.
//
#include <bits/stdc++.h>

using namespace std;

int countSubstrings(string s) {
    int res = 0;
    int l;
    int r;
    for (int i = 0; i < s.size(); i++)
    {
        l = i;
        r = i;
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            res++;
            l--;
            r++;
        }

        l = i;
        r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            res++;
            l--;
            r++;
        }
    }
    return res;
}

int main()
{
    int res = countSubstrings("abc");
    cout << res << endl;
    return 0;
}