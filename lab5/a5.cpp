#include <iostream>
#include <string>
using namespace std;
int main (){
    string n;
    int cnt1=0, cnt2=0;
    cin>>n;
    for (size_t i = 0; i < n.size() ; i++){
       if(n[i]>='A' && n[i]<='Z'){
           cnt1++;   
       }
        if(n[i]>='a' && n[i]<='z'){
           cnt2++;   
       }
    }
    cout<<cnt2<<" "<<cnt1;
    
}
