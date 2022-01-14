#include <iostream>
#include <string>
using namespace std;
int main (){
    string n;
    cin>>n;
    for (size_t i = 0; i < n.size() ; i++){
       n[i]=toupper(n[i]);
       cout<<n[i];
    }
}