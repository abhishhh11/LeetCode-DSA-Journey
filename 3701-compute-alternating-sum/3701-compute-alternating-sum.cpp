class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int os=0;
        int es=0;
        int i=0;
        while(i < n) {
            if(i%2 == 0) es += nums[i];
            else os += nums[i];
            i++;
        }
        return es-os;
    }
};