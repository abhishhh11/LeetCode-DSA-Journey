class Solution {
public:
    int cDigit(int n) {
        int x = n;
        int count =0;
        while(x>0) {
            x = x/10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++) {
            int y = cDigit(nums[i]);
            if(y%2 == 0) cnt++;
        }
        return cnt;
    }
};