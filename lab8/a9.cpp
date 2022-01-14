#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <pair<int,int>> v;
    for(int i=0; i<n; i++ ){
        int a,b;
        cin>>a>>b;
        pair<int,int> p(a,b);
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    vector <pair<int,int>> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
