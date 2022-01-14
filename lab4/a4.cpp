//2d array
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n,larg=0;
    cin>>n;
    int arr[n][n];

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>larg){
            larg=arr[i][j];
            }
        }
        
    }
    cout<<larg;
    return 0;
}
