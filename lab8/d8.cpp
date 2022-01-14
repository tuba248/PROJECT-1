#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int> v;
    
    for(int i=0; i<n;i++){
        int c;
        cin>>c; 
    
        v.push_back(c);
    }
    
    int k;
    cin>>k;

    v.erase(v.begin()+k);
    

    for(int i=0; i<n-1;i++ ){
        cout << v[i]<<" ";
    }
}