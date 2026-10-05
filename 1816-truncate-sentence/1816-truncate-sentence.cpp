class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int j = 0;
        int i = 0;
        while(i < s.length()) {
            
            if(s[i] != ' ') {
                ans += s[i];
            }
            else {
                j++;
                if(j == k) break;
                ans += ' ';
                
            }
            i++;
        }
        return ans;
    }
};