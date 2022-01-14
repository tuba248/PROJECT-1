#include <bits/stdc++.h>
using namespace std;
int n;
map <string,int> tel;
int main (){
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        tel[s]++;
    }
    int res=0;
    for(map<string , int> :: iterator it=tel.begin(); it!=tel.end(); it++){
        if(it->second == 3) res++;
    }
    cout<<res;
    return 0;
}