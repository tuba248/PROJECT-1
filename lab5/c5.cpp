#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int f=s.find(t);
    if(f!=-1) cout<<"YES";
    else cout<<"NO";
   
}
