#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;

    cin>>n>>m;

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            if(i==0 || i==n-1 || j==0||j==m-1){
                cout<<"* \t";
            }
            else{
                cout<<"  \t";
            }
            
        }
        cout<<"\n";
        cout<<"\n";
        
    }
    return 0;
    

}
