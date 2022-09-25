//
// Created by Tony on 9/25/2022.
//
#include <bits/stdc++.h>

using namespace std;

int evalRPN(vector<string>& tokens)
{
    stack<int> s;
    for (auto i : tokens)
    {
        if (i == "+" || i == "*" || i == "-" || i == "/")
        {
            long a = s.top();
            s.pop();
            long b = s.top();
            s.pop();
            if (i == "+")
                s.push(a + b);
            else if (i == "*")
                s.push(b * a);
            else if (i == "-")
                s.push(b - a);
            else
                s.push(b / a);
        }
        else
        {
            s.push(stoi(i));
        }
    }
    return s.top();
}

int main()
{
    vector<string> v = {"2","1","+","3","*"};
    int res = evalRPN(v);
    cout << res << endl;
    return 0;
}