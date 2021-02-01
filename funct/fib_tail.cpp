#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fib(int n, int a=1,int b=1){
    if(n==0)
        return a;
    if(n==1)
        return b;
    else
        return fib(n-1,b,a+b) ;
    
}

int main(){
    cout<<"fib(0)--> "<<fib(0)<<endl;
    cout<<"fib(1)--> "<<fib(1)<<endl;
    cout<<"fib(2)--> "<<fib(2)<<endl;
    cout<<"fib(3)--> "<<fib(3)<<endl;
    cout<<"fib(4)--> "<<fib(4)<<endl;
    cout<<"fib(5)--> "<<fib(5)<<endl;

}
