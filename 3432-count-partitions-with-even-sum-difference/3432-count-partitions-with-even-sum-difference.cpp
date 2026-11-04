class Solution {
public:
    // int countPartitions(vector<int>& nums) {
    //     int ans = 0;
    //     vector<int> pre;
    //     vector<int> suf(nums.size());
    //     int i = 0;
    //     int j = nums.size()-1;
    //     int sump = 0;
    //     int sums = 0;
    //     for(int i=0;i<nums.size();i++) {
    //         sump += nums[i];
    //         sums += nums[j];
    //         pre.push_back(sump);
    //         suf[j] = sump;
    //         j--;
    //     }
    //     for(int i=0;i<nums.size()-1;i++) {
    //         if((pre[i] - suf[i+1])%2 == 0) ans++;
    //     }
    //     return ans;
    // }

    int countPartitions(vector<int>& nums) {
        int ans = 0;
        int sumf = 0;
        int sums = 0;
        for(int i=0;i<nums.size()-1;i++) {
            sumf = 0;
            sums = 0;
            for(int j = 0;j<=i;j++) {
                sumf += nums[j];
            }
            for(int j = i+1;j<nums.size();j++) {
                sums += nums[j];
            }
            if((sumf-sums)%2 == 0) ans++;
        }
        return ans;
    }
};