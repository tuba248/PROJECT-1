#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c,k;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>c;
        v.push_back(c);
    }
    cin>>k;
    
    for(int i=0; i<n; i++){
        if(find(v.begin(), v.end(), k)!= v.end()){
            cout<<"Yes"; 
            return 0;
        }
        else cout<<"No"; return 0;
    }
    return 0;
}