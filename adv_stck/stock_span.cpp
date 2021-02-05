#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> stock_span(int arr[], int n)
{
    vector<int> v;
    stack<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        // int count = 1;
        if (s.size() == 0)
        {
            v.push_back(-1);
        }
        else if (s.size() > 0 && s.top().first > arr[i])
        {
            v.push_back(s.top().second);
        }
        else if (s.size() > 0 && s.top().first <= arr[i])
        {
            // int j = i;
            while (s.size() > 0 && s.top().first <= arr[i])
            {
                // j--;
                s.pop();
            }
            if (s.size() == 0) //forgot this
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = i - v[i];
    }
    return v;
}
int main()
{
    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    int n = 7;
    vector<int> v1 = stock_span(arr, n);
    for (int i = 0; i < 7; i++)
    {
        cout << v1[i] << endl;
    }
}
