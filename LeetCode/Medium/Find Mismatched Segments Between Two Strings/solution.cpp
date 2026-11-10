class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        int i = 0;
        int j = 0;
        while(i < s1.length() || j < s2.length()) {
            vector<string> p;
            string sub1 = "";
            string sub2 = "";
            while(s1[i] != s2[j]) {
                sub1 += s1[i];
                sub2 += s2[j];
                i++;
                j++;
            }
            if(sub1.length() != 0 ) p.push_back(sub1);
            if(sub2.length() != 0 ) p.push_back(sub2);
            if(p.size() != 0) ans.push_back(p);
            i++;
            j++;
        }
        return ans;
    }
};