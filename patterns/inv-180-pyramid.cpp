#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            if(j<n-i-1)
                cout<<"  \t";
            else
                cout<<"* \t";
            
        }
        
        cout<<"\n";
        cout<<"\n";
        
    }
    return 0;
    

}
