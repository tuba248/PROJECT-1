#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if(num==1) return false;
    for(int j=2; j<sqrt(num); j++){
        if(num%j==0) return false;
    }
    return true;
}

int main (){
    int n,c;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>c;
        v.push_back(c);
    }

    int k;
    cin>>k;
    int cnt=0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>k && isPrime(v[i])){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}