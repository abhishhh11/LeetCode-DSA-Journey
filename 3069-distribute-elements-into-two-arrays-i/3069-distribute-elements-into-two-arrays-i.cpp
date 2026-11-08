class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v1;
        v1.push_back(nums[0]);
        vector<int> v2;
        v2.push_back(nums[1]);
        int i = 2;
        int j = 0;
        int k = 0;
        while(i < nums.size()) {
            if(v1[k] > v2[j]) {
                v1.push_back(nums[i]);
                i++;
                k++;
            }
            else {
                v2.push_back(nums[i]);
                i++;
                j++;
            }
        }
        for(int m = 0;m<v2.size();m++) {
            v1.push_back(v2[m]);
        }
        return v1;
    }
};