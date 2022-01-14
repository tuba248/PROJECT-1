//Dots or number

#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(n>=2 && n<=100){
                cout<<"."<<" ";
            }
           arr[0][j]=1;
           arr[i][j-i]=arr[i-1][j]+1;


        }
    } 
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }
    
    return 0;
}