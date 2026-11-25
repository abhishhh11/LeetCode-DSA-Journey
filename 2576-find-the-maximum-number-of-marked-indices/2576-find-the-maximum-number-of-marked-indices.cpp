class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        if(n % 2 == 0) {
            int i = n/2 - 1;
            int j = n-1;
            while(i >= 0 && j >= n/2) {
                if(nums[i] * 2 <= nums[j]) {
                    ans += 2;
                    i--;
                    j--;
                }
                else i--;
            }
        }
        else {
            int i = n/2;
            int j = n-1;
            while(i >= 0 && j > n/2) {
                if(nums[i] * 2 <= nums[j]) {
                    ans += 2;
                    i--;
                    j--;
                }
                else i--;
            }
        }
        return ans;
    }
};