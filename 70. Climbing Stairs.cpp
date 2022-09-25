//
// Created by Tony on 9/24/2022.
//
#include <bits/stdc++.h>

using namespace std;

int climbStairs(int n) {
    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}

int main()
{
    int res = climbStairs(2);
    cout << res << endl;
    return 0;
}