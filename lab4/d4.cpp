//Multiplication

#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // arr[0][0]=0;
            // arr[i+1][0]=arr[i][0]+1;
            // arr[0][j+1]=arr[0][j]+1;
            arr[i][j]=i*j;
        
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           // if(arr[i+1][1]=arr[i][1]+1 && arr[1][j+1]=arr[1][j]+1 )
            cout<<arr[i][j]<<" "; 
            
        }
        cout<<endl;
    }
    
    return 0;
}