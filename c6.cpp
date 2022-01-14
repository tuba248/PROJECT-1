#include <bits/stdc++.h>
using namespace std;
void bp(int x, int a[], int b[]){
    int cnt=0;
    for (int i = 0; i < x; i++){
        if(a[i]==b[i]){
            cnt++;
        }
    }
    cout<<cnt;
    
}
int main (){
    int n;
    cin>>n;
    int a[n], b[n];
    for (size_t i = 0; i < n; i++){
        cin>>a[i];
    }
     for (size_t i = 0; i < n; i++){
        cin>>b[i];
    }
    bp(n,a,b);
}