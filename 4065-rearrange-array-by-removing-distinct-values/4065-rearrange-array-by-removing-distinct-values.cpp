class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
        }
        set<int> st;
        for(int i=0;i<nums.size();i++) {
            st.insert(nums[i]);
        }
        vector<int> ele;
        for(auto x : st) {
            ele.push_back(x);
        }
        vector<int> ans;
        while(mp.size() > 0) {
            // if(mp.size() == 0) break;
            // if(mp.find(ele[i]) == mp.end()) st.erase(ele[i]);
            for(int j=0;j<ele.size();j++) {
                if(mp.find(ele[j]) != mp.end() && mp[ele[j]] > 0) {            
                    ans.push_back(ele[j]);
                    mp[ele[j]]--;

                    if(mp[ele[j]] == 0) mp.erase(ele[j]);
                }
            }
        }
        return ans;
    }
};