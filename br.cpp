#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char> box;
    int cnt = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            cnt++;
    } else if(s[i] == '{'){
        cnt2++;
    } else {
        if(s[i] == ')'){
            cnt--;
            if(cnt < 0){
                cout << "No\n";
                return 0;
            }
        }
        if(s[i] == '}'){
            cnt2--;
            if(cnt2 < 0){
                cout << "No\n";
                return 0;
          }
        }
        if(s[i] == '['){
            cnt3++;
        } else{
            if(s[i] == ']'){
                cnt3--;
                if(cnt3 < 0){
                    cout << "No\n";
                    return 0;
            }
          }
        }
      }
    }
    if(cnt == 0 && cnt2 == 0 && cnt3 == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}