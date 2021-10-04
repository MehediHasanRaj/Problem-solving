#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)

using namespace std;

void solve(){
    string s; cin >> s;
    string original = "";
    for(int i = 0; i < s.size(); ++i){
        if(s[i]=='W' && s[i+1] == 'U' && s[i+2]=='B'){
            if(i != 0){
                if(original[original.size()-1] !=' '){
                    original.push_back(' ');
                }
                
            }
            i = i +2;
        }
        else{
            original.push_back(s[i]);
        }
    }
    cout << original << endl;
}

int main(){
    fastIO;
    int t = 1; //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}