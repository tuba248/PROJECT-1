#include <bits/stdc++.h>
using namespace std;
int fib(int r){
    if(r==1) return 0;
    if(r==2) return 1;
    //fib(r)=fib(r-1)+fib(r-2);
    return fib(r-1)+fib(r-2);
}
int main (){
    int n;
    cin>>n;
    cout<<fib(n);
}