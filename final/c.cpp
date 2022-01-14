#include <bits/stdc++.h>
using namespace std;
void alph(string s){
	map<char,int> cnt;
	for(int i=0; i<s.length();i++){
	    cnt[s[i]]++;	
	}
	for(auto it:cnt){
	    cout<<it.first<<" "<<it.second<<endl;
	}
}
int main(){
	string word;
	cin>>word;
	alph(word);
}
