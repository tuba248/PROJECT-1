#include <bits/stdc++.h>
using namespace std;
string s;
stack<char> st;
int main(){
    cin>>s;
    for(int i=0; i<(int)s.size();i++){
        if(s[i]=='(') st.push('(');
        else if(s[i]==')'){
            if(st.size()==0){
                cout<<"NO"<<endl;
                return 0;
            } 
            else if(st.top()==')'){
                cout<<"NO"<<endl;
                return 0;
            }
            else st.pop();
        }   
    }
    if(st.size()==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}