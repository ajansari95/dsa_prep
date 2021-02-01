#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= 2*n; i++)
    {if(i<=n){
        int j =1;
        for(; j <= i;)
        {
            /* code */
            cout<<"* ";
            j++;
        }
        for (; j <= (2*n)-(i);)
        {
            cout<<"  ";
            j++;
        }
        for(;j<=2*n;){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        }else
        {int j=1;
            for(;j<=(2*n-i+1);){
                cout<<"* ";
                j++;
            }
            for(;j<=i-1;){
                cout<<"  ";
                j++;
            }
            for(;j<=2*n;){
                cout<<"* ";
                j++;
            }
            cout<<endl;
        }
        
        }
    
}
