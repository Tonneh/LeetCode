//
// Created by Tony on 9/25/2022.
//
#include <bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    stack<char> stack;
    for (auto i: s)
    {
        if (i == ']' || i == ')' || i == '}')
        {
            if (stack.empty() || i == ']' && stack.top() != '[' || i == '}' && stack.top() != '{' ||
                i == ')' && stack.top() != '(')
                return false;
            stack.pop();
        }
        else
            stack.push(i);
    }
    return stack.empty() == true ? true : false;
}

int main()
{
    string s = "()";
    bool b = isValid(s);
    cout << b << endl;
    return 0;
}