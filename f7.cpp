#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if(s[i]%2==0)  {
            cnt++; 
            cout<< cnt; 
        }
        if(s[i]==s[i+1]) {
            cout<< 0; 
            return 0;
        }
    }
    

}