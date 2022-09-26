//
// Created by Tony on 9/25/2022.
//
#include <bits/stdc++.h>

using namespace std;

// what the values will look like
// {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}
// l = 0; lmax = 0; r = 11; rmax = 1; res = 0;
// l = 1; lmax = 1; r = 11; rmax = 1; res = 0;
// l = 2; lmax = 1; r = 11; rmax = 1; res = 1;
// l = 3; lmax = 2; r = 11; rmax = 1; res = 1;
// l = 3; lmax = 2; r = 10; rmax = 2; res = 1;
// l = 4; lmax = 2; r = 10; rmax = 2; res = 2;
// l = 5; lmax = 2; r = 10; rmax = 2; res = 4;
// l = 6; lmax = 2; r = 10; rmax = 2; res = 5;
// l = 7; lmax = 3; r = 10; rmax = 2; res = 5;
// l = 7; lmax = 3; r = 9;  rmax = 2; res = 6;
// l = 7; lmax = 3; r = 8; rmax = 2; res = 6;

// We can solve this problem using two pointers
// We have a left pointer at 0, and a right pointer at the end of the array.
// we store the values at these pointers in lmax and rmax.
// we loop from left to right, if the lmax is <= to rmax, we'll increment the left
// then we'll update lmax to the bigger value
// we'll then add to the result variable
// if rmax is greater than lmax, we'll move the right pointer to the left by 1
// we'll update rmax to the bigger value
// and add to the result variable
int trap(vector<int>& height)
{
    int res = 0;
    int l = 0;
    int r = height.size() - 1;
    int lmax = height[l];
    int rmax = height[r];
    while (l < r)
    {
        if (lmax <= rmax)
        {
            l++;
            lmax = max(lmax, height[l]);
            res += lmax - height[l];
        }
        else
        {
            r--;
            rmax = max(rmax, height[r]);
            res += rmax - height[r];
        }
    }
    return res;
}

int main()
{
    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int res = trap(v);
    cout << res << endl;
    return 0;
}