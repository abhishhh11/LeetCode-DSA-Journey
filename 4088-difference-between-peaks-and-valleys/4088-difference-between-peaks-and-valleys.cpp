class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int sump = 0;
        int sumv = 0;
        for(int i=1;i<nums.size()-1;i++) {
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]) sump += nums[i];
            if(nums[i] < nums[i-1] && nums[i] < nums[i+1]) sumv += nums[i];
        }
        return sump - sumv;
    }
};