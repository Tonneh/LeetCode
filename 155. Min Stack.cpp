//
// Created by Tony on 9/25/2022.
//
#include <bits/stdc++.h>

using namespace std;

class MinStack
{
public:
    MinStack()
    {

    }

    void push(int val)
    {
        s1.push(val);
        if (s2.empty() || s2.top() >= val)
            s2.push(val);
    }

    void pop()
    {
        if (s2.top() == s1.top())
        {
            s2.pop();
            s1.pop();
        }
        else
            s1.pop();
    }

    int top()
    {
        return s1.top();
    }

    int getMin()
    {
        return s2.top();
    }

private:
    stack<int> s1;
    stack<int> s2;
};

int main()
{
    MinStack s;
    s.push(-2);
    s.push(0);
    s.push(-3);
    cout << s.getMin() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.getMin() << endl;
    return 0;
}