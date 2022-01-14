#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    int x=a[0];
    for (int i=0; i<n; i++){
        //int x=a[0];
        cin>>a[i];
        x=x^a[i];
        //cout<<x;
    }
    //if(x=)
    cout<<x;
    return 0;

}
