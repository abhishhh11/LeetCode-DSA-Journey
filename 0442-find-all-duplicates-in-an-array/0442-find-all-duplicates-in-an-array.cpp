class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        //set<int> st;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
           // st.insert(nums[i]);
        }
        vector<int> ans;
        for(auto x : mp) {
            if(x.second == 2) ans.push_back(x.first);
        }
        return ans;
    }
};