class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        long long ans = 0;
        long long x = 0;
        for(int i=0;i<nums.size();i++) {
            x = nums[i]-i;
            ans += mp[x];
            mp[x]++;
        }
        return (1LL*n*(n-1))/2 - ans;
    }
};