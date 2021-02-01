#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int sum =0;

    int lastdigit,num;
    num=n;
    while(n>0){
        lastdigit=n%10;
        sum = sum + pow(lastdigit,3);
        n=n/10;
    }
    if(sum==num)
    {
        cout<<"Armstrong Number";
    }else
    {
        
        cout<<"not a Armstrong number";
    }
    




    return 0;
}
