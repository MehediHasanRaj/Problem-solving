#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)

using namespace std;
inline int findOdd(int n){
    int od;
    if(n%2==0){
        od = n/2;
    }
    else{
        od = (n/2)+1;
    }
    return od;
}

void solve(){
    int n; cin >> n;
    /*i) n = even then od = n/2
    od = od then odd print no
    od = even = num is even so make a pair
    */
   int oddCal = findOdd(n);
   if(oddCal%2){
       cout << "NO" << endl;
       return;
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