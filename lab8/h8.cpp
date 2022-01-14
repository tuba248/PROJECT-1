#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,c;
    cin>>n;
    vector <int> v;
    for(int i=0; i<n; i++){
        cin>>c;
        v.push_back(c);
    }
    cin>>k;
    sort(v.begin(), v.end());
    for(int i=0; i<k; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}