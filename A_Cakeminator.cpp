#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)
#define debug(x) cout << #x << " = " << x << endl

using namespace std;

void solve(){
    
	int result = 0;
	int r,c; cin >> r >> c;
	char vv[r][c];
	for(int i = 0; i < r ; ++r){
		for(int j = 0; j < c; ++j){
			char ch; cin >> ch;
			vv[i][j] = ch;
		}
	}
	for(int i = 0; i < r; ++i){
		int rcount = 0, ccount = 0;
		bool checkr = false, checkc = false;
		for(int j = 0; j <c; ++j){
			if(vv[i][j]=='S'){
				checkr = true;
				break;
			}
		}
		if(checkr==false){
			for(int j = 0; j <c ; ++j){
				if(vv[i][j]!='e'){
					++rcount;
				}
				vv[i][j] = 'e';
			}
		}
		result += rcount;
		for(int k = 0; k < r; ++k){
			// column count
			if(vv[k][i]=='S'){
				checkc = true;
				break;
			}
		}
		if(checkc==false){
			for(int k = 0; k < c ; ++k){
				if(vv[k][i]!='e'){
					++ccount;
				}
				vv[k][i] = 'e';
			}
		}
		result += ccount;
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
