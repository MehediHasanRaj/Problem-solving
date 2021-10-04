#include<bits/stdc++.h>
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(int i =a; i < b; ++i)
#define debug(x) cout << #x << " = " << x << endl

using namespace std;

void solve(){
    string n,s; cin >>n>> s;
    /* 
    last is zero, result = 0;
    else result = last;

    now for lenth-1 to 0 
    if s[i]==0 continue;
    else{
        result = s[i]+1+result
    }
    */
   int result = 0;
   int sz = s.size();
   if(s[sz-1]=='0'){
       result = 0;
   }
   else{
       result = (s[sz-1] -'0');
   }
   for(int i =0; i <sz-1;++i){
       if(s[i]!='0'){
           result = result + (s[i]-'0')+1;
       }
   }
   cout << result << endl;
        

}

int main(){
    fastIO;
    int t = 1; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}