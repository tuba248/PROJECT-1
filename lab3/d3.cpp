#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n,arr[100000],pos=1;
    cin>>n;
    
    for(int i=0; i<n;i++){
       cin >> arr[i];
    }
    int max=arr[0];
    for (int i=0; i<n; i++){
        if (max<arr[i]){
            max=arr[i];
            pos= i+1;
        }
    } cout << pos << endl;
    
  return 0;
} 
