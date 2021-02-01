#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> NGR(int A[], int n){
    vector<int> v;

    stack<int> s;
    for(int i=n-1;i>=0;i--){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>A[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=A[i]){
            while(s.size()>0 && s.top()<=A[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }else{
                v.push_back(s.top());
            }
        }
        s.push(A[i]);

    }
}
int main(){
    int arr[] ={1,3,2,4};
    vector<int> v;
    stack<int> s;
    for(int i=)


}
