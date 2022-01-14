#include <bits/stdc++.h>
using namespace std;
string tb(int x, string s){
    if(x==0) {return s;}
    if(x>0){
        if(x%2==0) s+="0";
        else s+="1";
    }
    return tb(x/2,s);
}
int main(){
    int n;
    cin>>n;
    string t;
    t=tb(n," ");
    reverse(t.begin(),t.end());
    cout<<t;   
}
