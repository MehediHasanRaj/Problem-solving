#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)

using namespace std;
int a[1000001];
void solve(){
    int r, c; cin >> r >> c;
    int result = pow(max(r,c),2);;
    if(max(r,c)==c && c%2==1){
        //decreasing from max to r
        result = result -(r-1);
    }
    else if(max(r,c)==r && r%2==0){
        //decreasing from max to c
        result = result - (c-1);
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