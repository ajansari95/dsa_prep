#include <iostream>
#include <bits/stdc++.h>

using namespace std;

stack<int> s;
stack<int> ss;

void push(int a)
{
    s.push(a);
    if (s.size() == 0 || a <= s.top())
    {
        ss.push(a);
    }
    return;
}

int pop()
{
    if (s.size() == 0)
    {
        return -1;
    }
    int ans = s.top();
    if (ans == ss.top())
    {
        ss.pop();
    }
    return ans;
}
int min_element()
{
    if (ss.size() == 0)
        return -1;
    else
        return ss.top();
}

int main()
{

    return 0;
}
