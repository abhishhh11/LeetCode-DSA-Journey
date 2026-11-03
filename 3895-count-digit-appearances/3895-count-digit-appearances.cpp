class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        for(int i=0;i<nums.size();i++) {
            int x = nums[i];
            while(x>0) {
                int y = x%10;
                if(y == digit) ans++;
                x = x/10;
            }
        }
        return ans;
    }
};