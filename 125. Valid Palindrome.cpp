//
// Created by Tony on 9/22/2022.
//
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    string ss = "";
    for (auto i : s)
        if (isalnum(i))
            ss += tolower(i);
    int l = 0;
    int r = ss.size() - 1;
    while (l <= r)
    {
        if (ss[l] != ss[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    bool test = isPalindrome("A man, a plan, a canal: Panama");
    cout << test << endl;
    return 0;
}