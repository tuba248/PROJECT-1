#include <bits/stdc++.h>
using namespace std;
void tb(int x){
    if(x==0) return;
    tb(x/2);
    cout<<x%2;
}
int main(){
    int n;
    cin>>n;
    tb(n);
}
