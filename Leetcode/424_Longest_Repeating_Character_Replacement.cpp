#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<string>
#include<unordered_set>
using namespace std;

int characterReplacement(string s, int k) {
    int result = 0;
    int maxcount = 0;
    int leftwindow = 0;
    vector<int> frequency(26 );

    for(int rightwindow = 0; rightwindow < s.size(); ++rightwindow){
        frequency[s[rightwindow] - 'A']++;
        maxcount = max(maxcount,frequency[s[rightwindow] - 'A']);
        if(rightwindow - leftwindow - maxcount + 1 > k){
            frequency[s[leftwindow] - 'A']--;
            leftwindow++;
        }
        result = max(result, rightwindow - leftwindow + 1);
    }
    return result;
}


int main(){
    string s = "AAABBBBA";
    int k = 1;
    int ans = characterReplacement(s,k);
    cout <<ans << endl;

    return 0;
}
