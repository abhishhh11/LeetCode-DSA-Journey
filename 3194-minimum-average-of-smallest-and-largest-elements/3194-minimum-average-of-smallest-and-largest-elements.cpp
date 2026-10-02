class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        float mn = INT_MAX;
        int i = 0;
        int j = nums.size()-1;
        float avg = 0.0;
        while(i<j) {
            avg = (nums[i] + nums[j])/2.0;
            mn = min(mn, avg);
            i++;
            j--;
        }
        return mn;
    }
};