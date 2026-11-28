class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        if(n == 1) return 1;
        if(nums[0] >= nums[1]) ans++;
        if(nums[n-1] >= nums[n-2]) ans++;
        for(int i=1;i<n-1;i++) {
            double x = (nums[i-1] + nums[i+1])/2.0;
            if(nums[i] >= x) ans++;
        }
        return ans;
    }
};