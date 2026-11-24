class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++) {
            int Gcd = 0;
            int Lcm = 1;
            int prod = 1;
            for(int j=i;j<nums.size();j++) {
                prod *= nums[j];
                Gcd = gcd(Gcd, nums[j]);
                Lcm = lcm((long long)nums[j], Lcm);
                if(prod == Lcm*Gcd) {
                    ans = max(ans, j-i+1);
                }
                else if(prod > Lcm*Gcd) break;
            }
        }
        return ans;
    }
};