#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int area_water(int arr[], int n){
    int mxl[n];
    int mxr[n];
    mxl[0]=arr[0];

    for(int i=1;i<n;i++){
        mxl[i] = max(mxl[i-1], arr[i]);
    }

    mxr[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        mxr[i] = max(mxr[i+1],arr[i]); 
    }
    int water[n];
    for(int i =0;i<n;i++){
        water[i] = min(mxl[i],mxr[i]) - arr[i];
    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=water[i];
    }
    return sum;
}

int main(){

}
