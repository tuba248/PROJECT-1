#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int sum=0;
    int arr[20];

    for(int i=0; i<20; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}


