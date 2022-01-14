#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <string> v;
	for(int i=0; i<4;i++){
		string s;
		cin>>s;
		v.push_back(s);
	}
	
	for(int i=0; i<4;i++){	
	    if(v[i]>=0 && v[i]<=255){
	    	cout<<1;
	    	return 0;
		}	
		if(v[i]>0){
			cout<<0;
			return 0;
		}
		else {
			cout<<0;	
			return 0;	
		}
	
	}
}