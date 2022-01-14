#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n;
    cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i!=0 && arr[i]== arr[i-1]) continue;
        cout<< arr[i]<<" ";
       
    }
    
}