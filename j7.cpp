#include <bits/stdc++.h>
using namespace std;
int pm(int x){
    if(x==0 || x==1) return 0;
    return  pm(x/10)+(x%10)/2;
}
int main(){
    int n;
    cin>>n;
    cout<<pm(n);
}