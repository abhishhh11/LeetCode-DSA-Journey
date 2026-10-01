class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
        for(int i=0;i<s.length();i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') mp[s[i]]++;
            else mp1[s[i]]++;
        }
        int mx = 0;
        int mx1 = 0;
        for(auto x : mp ) {
            mx = max(mx,x.second);
        }
        for(auto y : mp1) {
            mx1 = max(mx1, y.second);
        }
        return mx + mx1;
    }
};