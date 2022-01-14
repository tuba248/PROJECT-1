#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s_new;
    cin>>s;
    for(int i=s.size()-1; i>=0; --i){
        s_new+=s[i];
    }
    cout<<s_new;
}