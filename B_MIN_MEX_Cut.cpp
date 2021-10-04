#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)
#define debug(x) cout << #x << " = " << x << endl

using namespace std;

void solve(){
    string s; cin >> s;
    int zeroes = count(s.begin(),s.end(),'0');
    if(zeroes == 0) {
		cout << 0 << endl;
		return;
	}
	int first = s.find('0');
	int last = s.rfind('0');
	if(last - first +1 == zeroes){
		cout << 1 << endl;
	}
	else{
		cout << 2 << endl;
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
