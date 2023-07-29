#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int maxlen = 0;
    int leftwindow = -1;
    vector<int> Map(256,-1);

    for(int i = 0; i <s.size(); ++i){
        if(Map[s[i]]>leftwindow){
            leftwindow = Map[s[i]];
        }
        Map[s[i]]= i;
        maxlen = max(maxlen,i - leftwindow);
    }

    return maxlen;

}


int main(){
    string s = "";
    int ans = lengthOfLongestSubstring(s);
    cout <<ans << endl;
    
    return 0;
}
