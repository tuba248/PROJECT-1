#include <bits/stdc++.h>
using namespace std;

int atf(string s, int x, int res){
    if(x == s.size()) return res;
    if(int(s[x]-'0')%2==0) return atf(s, x+1, res+1);
    return atf(s,x+1,res); 
}
int main(){
    string t;
    cin>>t;
    cout<<atf(t, 0, 0);
}