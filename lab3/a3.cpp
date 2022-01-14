#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    const int size=100000;
    int arr[size];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        
        if(arr[i] % 2 !=0){
            cout<< arr[i] << " ";

        }   

    }

} 
