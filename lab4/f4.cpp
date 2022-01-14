//Position of Maximum

#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n,posi=0,posj=0;
    cin>>n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           cin>>arr[i][j];
        }
    }
    int max=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          if(arr[i][j]>max){
              max=arr[i][j];
              posi=i+1;
              posj=j+1;
            }

        }
        //cout<<endl;
    }
    cout<<posi<<" "<<posj;
    return 0;
}