#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)

using namespace std;

void solve(){
    string number; cin >> number;
    int one = 0, four = 0;
    for(int i = 0; i < number.size(); ++i){
        if(number[i] == '1') ++one;
        else if (number[i] =='4') ++four;
        else{
            cout << "NO";
            return;
        }
        
    }

    if((one<1) || (number[0]!='1')) cout << "NO";
    else if(one > (four-2)) cout << "YES";
    else cout << "NO";
    
}

int main(){
    fastIO;
    int t = 1; //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}