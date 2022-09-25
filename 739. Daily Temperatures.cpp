//
// Created by Tony on 9/25/2022.
//
#include <bits/stdc++.h>

using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures)
{
    vector<int> res(temperatures.size(), 0);
    stack<int> s;
    for (int i = 0; i < temperatures.size(); i++)
    {
        while (!s.empty() && temperatures[s.top()] < temperatures[i])
        {
            res[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }
    return res;
}

int main()
{
    vector<int> temperatures = {73,74,75,71,69,72,76,73};
    vector<int> res = dailyTemperatures(temperatures);
    for (auto i : res)
        cout << i << endl;
    return 0;
}