//Don’t wanna be perfect

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main (){
    int n,m,x;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            x=sqrt(arr[i][j]);
            if(arr[i][j]==x*x){
                arr[i][j]=sqrt(arr[i][j]);
            }
           cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }
    
    return 0;
}