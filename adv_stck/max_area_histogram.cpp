#include <iostream>
#include <bits/stdc++.h>

using namespace std;


vector<int> NSL(long long arr[], int n){
    stack<pair<int,int>> s;
    vector<int> v;
    int psuedo_index=-1;
    for (int i = 0; i < n; i++)
    {   
        if(s.size()==0){
            v.push_back(psuedo_index);
        }
        else if(s.size()>0 && s.top().first< arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>= arr[i])
        {
            while(s.size()>0 && s.top().first>= arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(psuedo_index);
            }else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
        /* code */
    }
    return v;
    
}
vector<int> NSR(long long arr[], int n){
    stack<pair<int,int>> s;
    vector<int> v;
    int psuedo_index=n;
    for (int i = n-1; i >=0; i--)
    {   
        if(s.size()==0){
            v.push_back(psuedo_index);
        }
        else if(s.size()>0 && s.top().first< arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>= arr[i])
        {
            while(s.size()>0 && s.top().first>= arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(psuedo_index);
            }else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
        /* code */
    }
    reverse(v.begin(), v.end());
    return v;
    
}
long long mah(long long arr[], int n)
{
    stack<pair<long long, int>> sl;
    stack<pair<long long, int>> sr;
    vector<int> vl;
    vector<int> vr;
    vector<long long> area;
    int psuedo_index_l = -1;
    int psuedo_index_r = 7;
    for (int i = 0; i < n; i++)
    {
        if (sl.size() == 0)
        {
            vl.push_back(psuedo_index_l);
        }
        else if (sl.size() > 0 && sl.top().first < arr[i])
        {
            vl.push_back(sl.top().second);
        }
        else if (sl.size() > 0 && sl.top().first >= arr[i])
        {
            while (sl.size() > 0 && sl.top().first >= arr[i])
            {
                sl.pop();
            }
            if (sl.size() == 0)
            {
                vl.push_back(psuedo_index_l);
            }
            else
            {
                vl.push_back(sl.top().second);
            }
        }
        sl.push({arr[i], i});
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (sr.size() == 0)
        {
            vr.push_back(psuedo_index_r);
        }
        else if (sr.size() > 0 && sr.top().first < arr[i])
        {
            vr.push_back(sr.top().second);
        }
        else if (sr.size() > 0 && sr.top().first >= arr[i])
        {
            while (sr.size() > 0 && sr.top().first >= arr[i])
            {
                sr.pop();
            }
            if (sr.size() == 0)
            {
                vr.push_back(psuedo_index_r);
            }
            else
            {
                vr.push_back(sr.top().second);
            }
        }
        sl.push({arr[i], i});
    }
    reverse(vr.begin(), vr.end());
    long long max = 0;
    for (int i = 0; i < n; i++)
    {
        area[i] = arr[i] * (vr[i] - vl[i] - 1);
        if (area[i] > max)
        {
            max = area[i];
        }

        /* code */
    }
    return max;
}

int main()
{
    long long arr[] = {6,2,5,4,5,1,6};
    int n=7;
    vector<long long> area ;
    vector<int> width, left,right;
    long long max =0;
    left = NSL(arr, n);
    right = NSR(arr, n);
    for(int i=0; i<n;i++){
        width.push_back(right[i]-left[i]-1);
    }
    for(int i=0;i<n;i++){
        area.push_back(arr[i]*width[i]);
    }
    for(int i=0;i<n;i++){
        if(max<area[i])
        {
            max = area[i];
        }
    }
    cout<<max;
    return 0;

}
