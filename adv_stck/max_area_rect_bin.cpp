#include <iostream>
#include <bits/stdc++.h>
#define MAX 1000

using namespace std;
vector<int> NSL(vector<int> arr, int n){
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
vector<int> NSR(vector<int> arr, int n){
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

int mah(vector<int> arr, int n)
{
    vector<int> area ;
    vector<int> width, left,right;
    int max =0;
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
    return max;
}

int mah_2d(int arr[MAX][MAX], int n, int m){
    vector<int> vq;
    int maxi =0;
    for(int j=0;j<m;j++){
        vq.push_back(arr[0][j]);
    }
    maxi = mah(vq,m);

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                vq[j]=0;
            }else{
                vq[j]=vq[j] + arr[i][j];
            }
        

        }
        maxi = max(maxi, mah(vq,m));
    }
    return maxi;

}

int main(){
    int T;
    cin>> T;

    int M[MAX][MAX];
    while (T--){
        int n,m;
        cin>>n>>m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>M[i][j];
                /* code */
            }
            
            
            /* code */
        }
        cout<< mah_2d(M, n,m)<<endl;
        

    }
    {
        /* code */
    }
    

}
