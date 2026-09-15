class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }
        unordered_set<int> st;
        for(auto x : mp) {
            int freq = x.second;
            if(st.find(freq) != st.end()) return false;
            else st.insert(freq);
        }
        return true;
    }
};