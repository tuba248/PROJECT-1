#include <bits/stdc++.h>
using namespace std;
int n,k;
map<int,int> m;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;++i){
        int b;
        cin>>b;
        m[b]++;
    }
    cout <<m[k];
}