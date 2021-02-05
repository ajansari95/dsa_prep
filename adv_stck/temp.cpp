#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int MAH(int a[], int n)
{
    int i, ans=0;
    stack<int> s;
    vector<int> nsl(n),nsr(n);
 
    //finding nearest smaller to left
    for(i=0;i<n;i++)
    {
        if(s.empty())
            nsl[i]=-1;
        else if(a[s.top()]<a[i])
            nsl[i]=s.top();
        else
        {
            while (!s.empty() && a[s.top()]>=a[i])
                s.pop();
            if(s.empty())
                nsl[i]=-1;
            else
                nsl[i]=s.top();
        }
        s.push(i);
    }
 
    while(!s.empty())
        s.pop();
 
    // finding nearest smaller element to right
    for(i=n-1;i>=0;i--)
    {
        if(s.empty())
            nsr[i]=n;
        else if(a[s.top()]<a[i])
            nsr[i]=s.top();
        else
        {
            while (!s.empty() && a[s.top()]>=a[i])
                s.pop();
            if(s.empty())
                nsr[i]=n;
            else
                nsr[i]=s.top();
        }
        s.push(i);
    }
 
    for(i=0;i<n;i++)
        ans=max(ans, a[i]*(nsr[i]-nsl[i]-1));
    return ans;
}
 
int Solution::maximalRectangle(vector<vector<int> > &a)
{
    
        int n,m,i,j;
        n=a.size();
        m=a[0].size();
        int temp[m]={0}, ans=0;
 
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                a[i][j]!=0?(temp[j]+=a[i][j]):(temp[j]=0);
 
            ans=max(ans, MAH(temp,m));
        }
    return ans;
}
int main(){

}
