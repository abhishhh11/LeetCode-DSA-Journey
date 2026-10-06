class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int cnt = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++) {
            if(mp[nums[i]] > 3 || mp[nums[i]] <= 2) continue;
            for(int j = i+1;j<nums.size();j++) {
                if(nums[i] == nums[j]) {
                    for(int k=j+1;k<nums.size();k++) {
                        if(nums[j] == nums[k] && (j-i == k-j)) cnt++; 
                    } 
                }
            }
        }
        return cnt;
    }
};