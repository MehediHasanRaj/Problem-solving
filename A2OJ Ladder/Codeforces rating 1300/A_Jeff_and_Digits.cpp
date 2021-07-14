#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)

using namespace std;

void solve(){
    int five=0,zero=0,x;
    int n; cin >> n;
    int c = n;
    while(c--){
        cin >> x;
        if(x==5) ++five;
        else
            ++zero;
    }
    //cout << five << " " << n-five << endl;
    if(zero==0) cout << -1 <<endl;
    else if(five < 9) cout << 0;
    else{
        for(int i = 0; i < five - five % 9; ++i){
            cout << 5;
        }
        for(int i = 0; i < zero; ++i) cout << 0;
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