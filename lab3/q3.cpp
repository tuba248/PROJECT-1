#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int x,p=0;
    cin>>x;
  
    for(int i=2;i<=x/2; i++){
        if(x%i==0){
            cout<<"No";
            p=1;
            break;
            
        }
       
    }
    if(p==0){
        cout<<"Yes";
    }
   
    return 0;
}

