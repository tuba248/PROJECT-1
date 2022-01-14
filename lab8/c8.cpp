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

    reverse(v.begin()+a, v.begin()+1+b);

    for(int i=0; i<n;i++ ){
        cout << v[i]<<" ";
    }
}