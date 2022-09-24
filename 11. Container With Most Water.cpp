//
// Created by Tony on 9/23/2022.
//
#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int>& height)
{
    int l = 0;
    int r = height.size() - 1;
    int res = 0;
    while (l <= r)
    {
        int area = (r - l) * min(height[l], height[r]);

        res = max(res, area);
        if (height[l] > height[r])
            r--;
        else
            l++;
    }
    return res;
}

int main()
{

    vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int res = maxArea(v);
    cout << res << endl;
    return 0;
}