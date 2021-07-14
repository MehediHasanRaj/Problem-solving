#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)

using namespace std;
long long a[100002];
void solve(){
    long long n,m; cin >> n >> m;
    
    loop(i,1,m+1){
        cin >>a[i];
    }
    long long sum = 0;
    long long last = 1;
    loop(i,1,m+1){
        if(a[i]>=last){
            sum += a[i]-last;
            last = a[i];
        }
        else{
            sum += (n-last) + a[i];
            last = a[i];
        }
    }
    cout << sum << endl;
}

int main(){
    fastIO;
    int t = 1;// cin >> t;
    while(t--){
        solve();
    }
    return 0;
}