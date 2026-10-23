class Solution {
public:
    int passwordStrength(string password) {
        bool seen[256] = {};
        int ans = 0;
        for(auto ch : password) {
            if(seen[ch]) continue;
            else seen[ch] = true;
            if(ch >= 65 && ch <= 90) ans += 2;
            else if(ch >= 97 && ch <= 122) ans += 1;
            else if(ch >= 48 && ch <= 57) ans += 3;
            else ans += 5;
        }
        return ans;
    }
};