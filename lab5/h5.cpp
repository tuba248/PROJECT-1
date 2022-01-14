#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){ 
    string s;
    cin>>s;
    int b[10]={0};
    for(int i=0; i<s.size();i++){
        b[s[i]-'0']++;
    }
    sort(b,b+10);
    for(int i=0; i<9; i++){
        if(b[i]!=b[i+1] && b[i]!=0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}