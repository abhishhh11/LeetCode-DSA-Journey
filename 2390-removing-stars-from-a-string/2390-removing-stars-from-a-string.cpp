class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        stack<char> st;
        for(int i=0;i<s.length();i++) {
            if(s[i] != '*') st.push(s[i]);
            else {
                if(st.size() == 0) continue;
                else st.pop();
            }
        }
        int x = st.size();
        for(int i=0;i<x;i++) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};