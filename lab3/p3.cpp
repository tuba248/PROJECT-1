#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int x,i;
    cin>>x;
    for(i=1; i<=x; i++){
        if (x==i*i){
            cout<<"Yes";
            break;
        } 
    }
    if(x!=i*i){
        cout<<"No";
    
    }
    
    return 0;
}