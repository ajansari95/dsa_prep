#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool check(int x, int y, int z){
    int a =max(x, max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }else if(a==y){
        b=x;
        c=z;
    }else{
        b=x;
        c=y;
    }
    return (a*a == (b*b +c*c))? true : false;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c))
        cout<<"P triplets"<<endl;
    else
        cout<<"Not P-triplets"<<endl;
    return 0;
}
