#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    while(s.size()!=1){
        long long sum=0;
        for(int i=0; i>s.size(); i++){
            sum+=s[i]-'0';
        }
        s=to_string(sum);
        cnt++;
    }
    cout<<s<<" "<<cnt<<endl;
}