#include <iostream>
#include <algorithm>

using namespace std;
int main (){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n;i++){
       cin >> arr[i];
    }

    int maxV=arr[0];
    int minV=arr[0];

    for(int i=0; i<n; i++){
       minV=min(minV, arr[i]);
       maxV=max(maxV, arr[i]);
    } 

    for(int i=0; i<n; i++){
        if (arr[i]==maxV){
            arr[i]=minV;

        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    
  return 0;
} 