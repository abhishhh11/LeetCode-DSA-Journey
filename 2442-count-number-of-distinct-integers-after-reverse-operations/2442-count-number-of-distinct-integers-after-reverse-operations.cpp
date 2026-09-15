class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        int x = n;
        while(x > 0) {
            int a = x%10;
            rev = rev*10 + a;
            x = x/10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i = 0;i<n;i++) {
            st.insert(nums[i]);
            int y = reverse(nums[i]);
            st.insert(y);
        }
        int ans = st.size();
        return ans;
    }
};