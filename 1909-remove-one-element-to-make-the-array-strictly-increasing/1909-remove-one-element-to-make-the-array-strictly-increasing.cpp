class Solution {
public:
    bool isSorted(vector<int>& num) {
        for(int i=1;i<num.size();i++) {
            if(num[i] <= num[i-1]) return false;
        }
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) {
        vector<int> n;
        vector<int> m;
        int x,y;
        for(int i=1;i<nums.size();i++) {
            if(nums[i] <= nums[i-1]) {
                x = i-1;
                y = i;
                break;
            }
        }
        for(int i=0;i<nums.size();i++) {
            if(i == x) continue;
            n.push_back(nums[i]);
        }
        if(isSorted(n)) return true;
        for(int i=0;i<nums.size();i++) {
            if(i == y) continue;
            m.push_back(nums[i]);           
        }
        if(isSorted(m)) return true;
        return false;
    }
};