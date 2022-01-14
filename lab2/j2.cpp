#include <iostream>
using namespace std;

int main(){
	int n;
    int count=0;
	cin>>n;
	int*arr=new int [n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%10==0){
			count++;
		}
		if(arr[i]>=10 && (arr[i]/10)%10==0){
			count++;
		}
		if(arr[i]>=100 && (arr[i]/100)%10==0){
			count++;
    	}
		if(arr[i]>=1000 && (arr[i]/1000)%10==0){
			count++;
		}
	}
	cout<<count;	
}