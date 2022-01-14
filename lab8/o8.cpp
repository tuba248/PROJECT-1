#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set <char> b;
    for(int i=0; i<s.size(); i++){
        s[i]=tolower(s[i]);
        b.insert(s[i]);
    }
    cout<<b.size()<<endl;
    for(set<char> :: iterator it=b.begin();it!=b.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}