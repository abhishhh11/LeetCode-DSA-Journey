class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        long long c = 0;
        long long mx = INT_MIN;
        int i = 0;
        while(i < nums.size()) {
            if(nums[i] == 1) c++;
            else{
                mx = max(mx, c);
                c = 0;
            }
            i++;
        }
        mx = max(mx, c);
        return mx;
    }
};