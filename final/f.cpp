#include <bits/stdc++.h>
using namespace std;
const int MAX=100;

bool isSymmetric(int mat[][MAX], int N)
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] != mat[j][i])
                return false;
    return true;
}

int main(){
    int n;
    cin>>n;
    int a[n][MAX];
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    if(isSymmetric(a,n)){
    	cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
