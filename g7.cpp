#include <bits/stdc++.h>
using namespace std;
int got(int x){
    if(x==0) return 1;
    if(x==1){
        return 1;
    }
    return got(x-1)*x;
}
int main(){
    int n;
    cin>>n;
    cout<<got(n);
}