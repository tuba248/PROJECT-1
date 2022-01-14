#include <bits/stdc++.h>
using namespace std;
bool bst(long int n){
    if(n==1) return true;
    if(n%2!=0) return false;
    n/=2;
    if(n!=0) return bst(n);
}
int main (){
    long int n;
    cin>>n;
    if(bst(n)){
        cout<<"Yes";
    }
    else cout<<"No";
}
