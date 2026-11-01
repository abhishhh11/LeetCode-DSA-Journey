class Solution {
public:
    int minMoves(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int x = nums[0];
        // int ans = 0;
        // for(int i=1;i<nums.size();i++) {
        //     ans += nums[i] - x;
        // }
        // return ans;

        int mn = nums[0];
        for(int i=0;i<nums.size();i++) {
            if(nums[i] < mn) mn = nums[i];
        }
        int ans = 0;
        for(int i=0;i<nums.size();i++) {
            ans += nums[i] - mn;
        }
        return ans;
    }
};