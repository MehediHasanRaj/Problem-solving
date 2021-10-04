#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)
#define debug(x) cout << #x << " = " << x << endl
#define mod 1000000007
using namespace std;

void solve(){
    int n; cin >> n;
    int result = 1;
    int p =n;
    for(int i = 0; i < n; ++i){
        result = (result * 2) % mod;
    }
    cout << result << endl;
}

int main(){
    fastIO;
    int t = 1; //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}