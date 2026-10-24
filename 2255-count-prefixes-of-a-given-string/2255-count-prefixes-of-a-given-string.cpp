class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int m = s.length();
        int ans = 0;
        for(int i=0;i<words.size();i++) {
            int n = words[i].length();
            if(n < m) {
                string a = "";
                a += s.substr(0, n);
                if(a == words[i]) ans++;
            }
            else if(m < n) {
                // string a = "";
                // a += words[i].substr(0, m);
                // if(a == s) ans++;
                continue;
            }
            else {
                if(words[i] == s) ans++;
            }
        }
        return ans;
    }
};