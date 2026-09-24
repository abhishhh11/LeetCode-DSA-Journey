class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_set<char> st;
        for(int i=0;i<s.length();i++) {
            st.insert(s[i]);
        }
        if(st.size() == 26) return true;
        else return false;
    }
};