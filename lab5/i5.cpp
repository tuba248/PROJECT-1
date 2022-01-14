#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    if(s==t) {cout<< "YES"; return 0;}
    string a=s;
    reverse(s.begin(),s.end());
    else if(a==t) {cout<<"YES"; return 0;}
    else {cout<<"NO";}
}
