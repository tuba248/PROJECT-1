//Star triangle

#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    short n;
    cin>>n;
    //1<=n<=100;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
          if(n>=1 && n<=100){
            cout<<"[*]";
          }
        }
        cout<<endl;
    }

   
    return 0;
}