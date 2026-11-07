class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int noz = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 0) noz++;
        }
        int ans = 0;
        int j = nums.size()-1;
        while(noz != 0) {
            if(nums[j] == 0) {
                noz--;
            }
            else {
                noz--;
                ans++;
            }
            j--;
        }
        return ans;
    }
};