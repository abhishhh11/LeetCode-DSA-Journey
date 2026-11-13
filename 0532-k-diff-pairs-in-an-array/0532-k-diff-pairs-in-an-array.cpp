class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans = 0;
        if(k == 0) {
            map<int, int> mp;
            for(int i=0;i<nums.size();i++) {
                mp[nums[i]]++;
            }
            for(auto x : mp) {
                if(x.second >= 2) ans++;
            }
            return ans;
        }
        set<int> st(nums.begin(), nums.end());
        set<int> check;
        for(int i=0;i<nums.size();i++) {   
            if(check.find(nums[i]) == check.end()) {
                check.insert(nums[i]);
                int x = (nums[i] - k);
                if(st.find(x) != st.end()) ans++;
            }
        }
        return ans;
    }
};