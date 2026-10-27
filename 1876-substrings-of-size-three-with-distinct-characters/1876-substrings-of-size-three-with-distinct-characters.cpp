class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length() <=2 ) return 0;
        int ans = 0;
        int i=0;
        int j=2;
        while(i <= s.length()-3) {
            if(s[i] != s[i+1] && s[i+1] != s[j] && s[i] != s[j]) ans++;
            i++;
            j++;
        }
        return ans;
    }
};