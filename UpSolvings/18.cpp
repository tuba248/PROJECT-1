#include <iostream>
using namespace std;
int main(){
    float perodd=0,pereven=0;
    const int n=10000;
    int arr[n];
    for(int i=0; i<n;i++ ){
        cin>>arr[i];
        if(arr[i]%2==0){
            pereven=pereven+1;

        } else {
            perodd=perodd+1;
        }
        if (arr[i]<0){
            break;
        }
        cout<<pereven*i/100<<" "<<perodd*i/100;
    } 
    return 0;
}
