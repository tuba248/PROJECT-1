#include <bits/stdc++.h>
using namespace std;
bool abd(int n, int a[] ,int x){
    if(n==1 && a[0]!=x) return false;
    if(a[n-1]==x) return true;
    return abd(n-1, a, x);
}
int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0; i<t; i++){
        cin>>a[i];
    } 
    int s;
    cin>>s;
    if(abd(t,a,s)) cout<<"Yes";
    else cout<<"No"; 
}