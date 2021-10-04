#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)

using namespace std;

void solve(){
    int r,c; cin >> r >> c;
    int mn = min(r,c);
    if(mn %2 == 0){
        cout << "Malvika" <<endl;
    }
    else{
        cout << "Akshat" << endl;
    }
}

int main(){
    fastIO;
    int t = 1; //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}