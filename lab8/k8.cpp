#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, c, k;
    cin>>n;
    vector <int> v;
    for(int i=0; i<n; i++){
        cin>>c;
        v.push_back(c);
    }
    cin>>k;
    int sum=0;
    sort(v.rbegin(),v.rend());
    for(int i=0; i<k; i++){
        sum+=v[i];
    }
    cout<<sum;
}