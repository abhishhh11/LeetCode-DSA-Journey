class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int mx1 = INT_MIN;
        int i = 0;
        int cnt = 1;
        while(i < nums.size()-1) {
            if(nums[i] < nums[i+1]) cnt++;
            else {
                mx1 = max(mx1, cnt);
                cnt = 1;
            }
            i++;
        }
        mx1 = max(mx1, cnt);
        cnt = 1;
        int mx = INT_MIN;
        int j = 0;
        while(j < nums.size() - 1) {
            if(nums[j] > nums[j+1]) cnt++;
            else {
                mx = max(mx, cnt);
                cnt = 1;
            }
            j++;
        }
        mx = max(mx, cnt);
        return max(mx1, mx);
    }
};