class Solution {
public:
    // int dig(int n) {
    //     int ndig = 0;
    //     while(n>0) {
    //         ndig++;
    //         n = n/10;
    //     }
    //     return ndig;
    // }
    int minMergedInteger(vector<int>& nums) {
        int mn = INT_MAX;
        for(int i=0;i<nums.size()-1;i+=2) {
            //string s = to_string(nums[i]) + to_string(nums[i+1]);
            int n = stoll(to_string(nums[i]) + to_string(nums[i+1]));
            mn = min(mn, n);
        }
        return mn;
    }
};