class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int> mp;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
        }
        while(mp.size() > 0) {
            vector<int> p;
            for(auto it = mp.begin(); it != mp.end();) { 
                p.push_back(it->first);
                it->second--;
                if(it->second == 0) it = mp.erase(it);
                else ++it;
            }
            ans.push_back(p);
        }
        return ans;
    }
};