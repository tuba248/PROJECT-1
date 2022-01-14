#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int b=0;
    int c=0;
    for(int i=0; i<s.size(); i++){
       if(s[i]<'9' && s[i]>'0' && i%2==0){
           b+=s[i]-'0';
        }
         if(s[i]<'9' && s[i]>'0' && i%2==1){
           c+=s[i]-'0';
        }
    }
    if(b!=c) cout<<"NO";
    else cout<<"YES";
}
