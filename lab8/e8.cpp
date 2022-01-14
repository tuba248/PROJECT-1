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
    
    int a,b;
    cin>>a>>b;

    v.erase(v.begin()+a, v.begin()+b+1);
    

    for(int i=0; i<n-(b-a+1);i++ ){
        cout << v[i]<<" ";
    }
}