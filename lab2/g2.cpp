#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max=-9999;
    for (int i=0;i<n; i++){
        int x;
        cin>>x;
        if (x>max){
            max=x;
         }

    }
    cout<<max;
 
}

