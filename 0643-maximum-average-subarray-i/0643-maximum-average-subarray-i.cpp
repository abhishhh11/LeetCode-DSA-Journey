class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double pSum = 0;
        double cSum = 0;
        for(int i=0;i<k;i++) {
            pSum += nums[i];
        }
        double mx = pSum/k;
        int i=1;
        int j=k;
        while(i <= nums.size() - k) {
            pSum = pSum + nums[j] - nums[i-1];
            cSum = pSum/k;
            mx = max(mx, cSum);
            i++;
            j++;
        }
        return mx;
    }
};