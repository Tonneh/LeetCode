//
// Created by Tony on 9/22/2022.
//
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches)
{
    vector<vector<int>> res(2);
    map<int, int> m;
    for (auto i : matches)
    {
        m[i[0]];
        m[i[1]]--;
    }

    for (auto i : m)
    {
        if (i.second == 0)
            res[0].push_back(i.first);
        else if (i.second == - 1)
            res[1].push_back(i.first);
    }
    return res;
}


int main()
{
    vector<vector<int>> test = {{1,3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}};
    vector<vector<int>> res = findWinners(test);
    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << ", ";
        }
        cout << endl;
    }
    return 0;
}