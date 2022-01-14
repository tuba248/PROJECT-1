#include <bits/stdc++.h>
using namespace std;
int bts(int x){
    if(x==0) return 1;
    return 2*bts(x-1);
}
int main(){
    int n;
    cin>>n;
    cout<<bts(n);
}
