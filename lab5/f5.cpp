#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l,r;
    cin>>l>>r;
    for(int i=l; i<r+1; i++){
      // string t=s.substr(l,r);
       cout<<s[i]; 
       //return 0; 
       
    }
}