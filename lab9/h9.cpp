#include <bits/stdc++.h>
using namespace std;
int n;
string s;
map<string, int> f;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        if(!f[s]) f[s]=i;
    }
    for(map<string, int > :: iterator it=f.begin(); it!=f.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}