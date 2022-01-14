#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n, arr[10000];
    cin>>n;

    for(int i=1; i<=n;i++){
        cin>>arr[i];
        cout<<arr[i]*arr[i]<<" ";
    }
    
    return 0;
}