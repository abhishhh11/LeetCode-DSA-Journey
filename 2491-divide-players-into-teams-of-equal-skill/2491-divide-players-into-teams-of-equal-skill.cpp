class Solution {
public:
    long long dividePlayers(vector<int>& nums) {
        long long n=nums.size();
        sort(nums.begin(), nums.end());
        long long i=0;
        long long j = n-1;
        long long sum = nums[i] + nums[j];
        long long ans = 0;
        while(i < j) {
            if(nums[i] + nums[j] == sum) {
                ans += nums[i]*nums[j];
                i++;
                j--;
            }
            else return -1;
        }
        return ans;
    }
};