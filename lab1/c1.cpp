#include <iostream>
using namespace std;
int main () {

    int t;
    cin >> t;

    int r=t%2;
    t=t/2;
    int k=t%2;
    t=t/2;
    int e=t%2;
    t=t/2;
    int l=t%2;
    t=t/2;

    int res=8*r+4*k+2*e+l;

    cout << res ;

    return 0;
    
}