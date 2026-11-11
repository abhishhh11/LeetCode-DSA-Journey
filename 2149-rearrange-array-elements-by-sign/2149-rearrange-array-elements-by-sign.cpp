class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int i = 0;
        int j = 0;
        int k = 1;
        while(i < nums.size()) {
            if(nums[i] > 0) {
                ans[j] = nums[i];
                i++;
                j += 2;
            }
            else {
                ans[k] = nums[i];
                i++;
                k += 2;
            }
        }
        return ans;
    }
};