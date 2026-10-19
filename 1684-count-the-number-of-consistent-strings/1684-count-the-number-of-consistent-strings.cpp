class Solution {
public:
    int countConsistentStrings(string all, vector<string>& w) {
        unordered_set<char> st;
        for(int i=0;i<all.length();i++) {
            st.insert(all[i]);
        }
        int cnt = 0;
        bool flag = true;
        for(int i=0;i<w.size();i++) {
            flag = true;
            for(int j=0;j<w[i].length();j++) {
                if(st.find(w[i][j]) == st.end()) {
                    flag = false;
                    break;
                }
            }
            if(flag == true) cnt++;
        }
        return cnt;
    }
};