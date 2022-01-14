#include <bits/stdc++.h>
using namespace std;
void txt(int x, int a[], int b[]){
    int d[x];
    for (size_t i = 0; i < x; i++){
        d[i]=abs(a[i]-b[i]);
    }
    for (size_t i = 0; i < x; i++){
        cout<< d[i]<< " ";
    }
}

int main(){
    int n;
    cin>> n;
    int a[n], b[n];
    for (size_t i = 0; i <n; i++){
        cin>> a[i];
    }

    for (size_t i = 0; i <n; i++){
        cin>> b[i];
    }
    txt(n, a, b);
}