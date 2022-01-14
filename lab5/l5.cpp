#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin>>s;
    string t=s;
    int c=0;
    for (int i = 0; i < s.size(); i++){
       t[i]=s[i];
    }
    sort(t.begin(),t.end());
    for (int i = 0; i < s.size(); i++){
        if(t[i]==s[i]){
            c++;
        }      
    } 
    if(c==s.size()) cout<<"YES";
    else cout<<"NO";
      
}