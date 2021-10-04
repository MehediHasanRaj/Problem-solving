#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)
#define debug(x) cout << #x << " = " << x << endl

using namespace std;
int n;
int arr1[n];
int arr2[n];
void solve(){
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin >> arr1[i];
    }
    for(int i = 0; i <n; ++i){
        cin >> arr2[i];
    }
}

int main(){
    fastIO;
    int t = 1; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}