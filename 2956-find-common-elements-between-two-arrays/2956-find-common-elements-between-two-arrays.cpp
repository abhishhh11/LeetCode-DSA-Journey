class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& n1, vector<int>& n2) {
        unordered_map<int,int> mp;
        unordered_map<int,int> mp1;
        for(int i=0;i<n1.size();i++) {
            mp[n1[i]]++;
        }
        for(int i=0;i<n2.size();i++) {
            mp1[n2[i]]++;
        }
        int cn1 = 0;
        int cn =0;
        for(auto x : mp) {
            if(mp1.find(x.first) != mp1.end()) {
                cn1 += x.second;
            }
        }
        for(auto x : mp1) {
            if(mp.find(x.first) != mp.end()) {
                cn += x.second;
            }
        }
        vector<int> ans;
        ans.push_back(cn1);
        ans.push_back(cn);
        return ans;
    }
};