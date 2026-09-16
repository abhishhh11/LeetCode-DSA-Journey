class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        unordered_map<int, int> m;
        for(int i=1;i<n;i++) {
            nums[i] += nums[i-1];
        }
        for(int i=0;i<n;i++) {
            if(nums[i] == k) {
                cnt++;
                //m[nums[i]]++;
               // cnt += m[nums[i]];
            }
            int rem = nums[i] - k;
            if(m.find(rem) != m.end()) cnt += m[rem];
            m[nums[i]]++;
        }
        return cnt;
    }
};