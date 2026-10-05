class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l;
        vector<int> r;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] < pivot) l.push_back(nums[i]);
            if(nums[i] > pivot) r.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == pivot) l.push_back(nums[i]);
        }
        for(int i=0;i<r.size();i++) {
            l.push_back(r[i]);
        }
        return l;
    }
};