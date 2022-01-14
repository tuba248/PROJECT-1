#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n, cnt=0;
    cin>>n;
    const int size=100000;
    int arr[size];
    for(int i=0; i<n;i++){
       cin >> arr[i];
    }
    
    for(int i=0; i<n; i++){
         if(arr[i]>0){
            cnt++;
        }   

    } cout<<cnt;
  return 0;
} 
