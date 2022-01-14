//Dots or number

#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n,m;
    int min=0;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    } 
    int sum[n]={0};

    for(int i=0; i<n; i++){
        if (arr[i][i]<0) {
            for(int j=0; j<m; j++){
                sum[i]+=arr[i][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<sum[i];
    }

    /*for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

        }
    }
    */
    return 0;
}