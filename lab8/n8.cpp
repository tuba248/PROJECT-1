#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,c;
    cin>>n;
    set <int> s;

    for(int i=0; i<n; i++){
        cin>>c;
        s.insert(c);
    }
    int sum=0;
    for(set<int> :: iterator it=s.begin(); it!=s.end(); it++ ){
        if((*it)%2!=0){
            cout<<*it<<" ";
        }
    }
    cout<<endl;

}