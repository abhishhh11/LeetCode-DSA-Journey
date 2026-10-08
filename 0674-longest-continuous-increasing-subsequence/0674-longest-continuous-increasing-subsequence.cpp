class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        long long c = 1;
        long long mx = INT_MIN;
        int i=0;
        while(i < nums.size() - 1) {
            if(nums[i] < nums[i+1]) c++;
            else {
                mx = max(mx, c);
                c =1;
            }
            i++;
        }
        mx = max(mx, c);
        return mx;
    }
};