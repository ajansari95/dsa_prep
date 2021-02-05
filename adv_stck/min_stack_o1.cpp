#include <iostream>
#include <bits/stdc++.h>

using namespace std;
stack<int> s;
int min_el = 0;
void push(int a)
{
    if (s.size() == 0)
    {
        s.push(a);
        min_el = a;
    }
    else
    {
        if (a >= min_el)
        {
            s.push(a);
        }
        else if (a < min_el)
        {
            s.push(2 * a - min_el);
            min_el = a;
        }
    }
}
void pop()
{
    if (s.size() == 0)
    {
        return -1;
    }
    else
    {
        if (s.top() >= min_el)
        {
            s.pop();
        }
        else
        {
            min_el = 2 * min_el - s.top();
            s.pop();
        }
    }
}
int top()
{
    if (s.size() == 0)
    {
        return -1;
    }
    else
    {
        if (s.top() > min_el)
        {
            return s.top();
        }
        else
        {
            return min_el;
        }
    }
}
int get_min()
{
    if (s.size() == 0)
        return -1;
    return min_el;
}
int main()
{

    return 0;
}
