// The 2nd
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n,larg=0,larg2=0;
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

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>larg2 && arr[i][j]<larg){
                larg2=arr[i][j];

                if(larg==larg2){
                    cout<<0;
                }
            }
        }
            
 
    }
    cout<<larg2;
    return 0;
}