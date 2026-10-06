class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int exc) {
        int mx = INT_MIN;
        for(int i=0;i<c.size();i++) {
            mx = max(mx, c[i]);
        }
        vector<bool> ans;
        for(int i=0;i<c.size();i++) {
            if(c[i] + exc >= mx) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};