class Solution {
public:
    int passwordStrength(string pass) {
        unordered_set<char> st;
        for(int i=0;i<pass.length();i++) {
            st.insert(pass[i]);
        }
        int ans = 0;
        for(auto x : st) {
            if(x >= 65 && x <= 90) ans += 2;
            else if(x >= 97 && x <= 126) ans += 1;
            else if(x >= 48 && x <= 57) ans += 3;
            else ans += 5;
        }
        return ans;
    }
};