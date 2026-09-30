class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for(int i=0;i<s.length()-1;i++) {
            char ch1 = s[i];
            char ch2 = s[i+1];
            int f = static_cast<int>(ch1);  
            int s = static_cast<int>(ch2);        
            ans += abs(f-s);                         
        }
        return ans;
    }
};