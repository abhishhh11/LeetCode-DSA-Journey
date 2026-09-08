class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int j=0;j<nums.size();j++) {
            for(int k=j+1;k<nums.size();k++) {
                if(nums[j]+nums[k]==target) {
                    return {j,k};
                }
                
            }
        }
        return {};
    }
    
};