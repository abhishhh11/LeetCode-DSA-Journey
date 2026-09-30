class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<int> st;
        for(int i=0;i<s.length();i++) {
            st.insert(s[i]);
        }
        int x =st.size();
        return x;
    }
};