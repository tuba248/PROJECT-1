#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string b,c;
    for (char i = 'a'; i < 'z'; i++){
        b=s+i;
        c=s+i;
        reverse(c.begin(),c.end());
        if(b==c){
           cout<<"YES"; 
           return 0;
        }
    }
    {cout<<"NO"; return 0;}
}