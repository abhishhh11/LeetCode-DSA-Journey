class Solution {
public:
    int sumD(int n) {
        int k = n;
        int sumOfD = 0;
        while(k>0) {
            int a = k%10;
            sumOfD += a;
            k = k/10;
        }
        return sumOfD;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
            int x = sumD(nums[i]);
            if(i == x) {
                return i;
                break;
            }
        }
        return -1;
    }
};