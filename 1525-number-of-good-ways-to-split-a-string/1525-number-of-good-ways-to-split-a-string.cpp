class Solution {
public:
    int numSplits(string s) {
        unordered_map<char, int> l;
        unordered_map<char ,int> r;
        for(int i=0;i<s.length();i++) {
            l[s[i]]++;
        }
        int ans = 0;
        for(int i=0;i<s.length();i++) {
            l[s[i]]--;
            if(l[s[i]] == 0) l.erase(s[i]);
            r[s[i]]++;
            if(r.size() == l.size()) ans++;
        }
        return ans;
    }
};