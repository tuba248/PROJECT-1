#include <bits/stdc++.h>
using namespace std;
int n;
map<int,int> m;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        m[c]++;
    }
    int cnt=0;
    for(map<int,int> :: iterator it =m.begin(); it!=m.end(); it++){
        if(it->second >1) cnt++;
    }
    cout<<cnt;
    return 0;
}