class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(int i=0;i<r.size();i++) {
            mp1[r[i]]++;
        }
        for(int i=0;i<m.size();i++) {
            mp2[m[i]]++;
        }
        for(auto ele : mp1) {
            char ch = ele.first;
            int freq1 = ele.second;
            if(mp2.find(ch) == mp2.end()) return false;
            else {
                int freq2 = mp2[ch];
                if(freq2 < freq1) return false;
            }
        }
        return true;
    }
};