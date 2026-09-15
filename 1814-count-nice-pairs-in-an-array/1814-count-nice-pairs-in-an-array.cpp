class Solution {
public:
    int rev(int n) {
        int r=0;
        while(n>0) {
            int a =n%10;
            r = r*10 + a;
            n = n/10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) {
           int x = nums[i] - rev(nums[i]);
            if(m.find(x) != m.end()) {
                count = count%1000000007;
                count += m[x];
                m[x]++;
            }
            else m[x]++;
        }
        return count%1000000007;
    }
};