#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v;
    
    for(int i=0;i<n; i++ ){
        int c;
        cin>>c;
        v.push_back(c);
    }
    vector <int> v1;
    vector <int> v2;
    for(int i=0;i<n; i++){
        if(v[i]%2==0){
            v1.push_back(v[i]);
        }
        else {
            v2.push_back(v[i]);
        }
    }
    sort(v1.rbegin(),v1.rend());
    sort(v2.begin(),v2.end());

    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }

}