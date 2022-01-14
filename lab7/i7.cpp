#include <bits/stdc++.h>
using namespace std;
int inf(int x){
    int s=0;
    cin>>x;
    if(x==0) return s;
    return s+x+inf(x);
}
int main(){
    int n;
    cout<<inf(n);
    return 0;
}