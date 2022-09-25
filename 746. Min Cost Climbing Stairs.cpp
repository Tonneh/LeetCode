//
// Created by Tony on 9/24/2022.
//
#include <bits/stdc++.h>

using namespace std;

int minCostClimbingStairs(vector<int>& cost)
{
    cost.push_back(0);
    for (int i = cost.size() - 3; i >= 0; i--)
        cost[i] += min(cost[i + 1], cost[i + 2]);
    return min(cost[0], cost[1]);
}

int main()
{
    vector<int> v = {10, 15, 20};
    int res = minCostClimbingStairs(v);
    cout << res << endl;
    return 0;
}