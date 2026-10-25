class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> n2;
        for(int i=0;i<nums2.size();i++) {
            n2.insert(nums2[i]);
        }
        unordered_set<int> n1;
        for(int i=0;i<nums1.size();i++) {
            n1.insert(nums1[i]);
        }
        vector<int> ans1;
        for(auto x : n1) {  
            if(n2.find(x) == n2.end()) ans1.push_back(x);
        }
        vector<int> ans2;
        for(auto x : n2) {  
            if(n1.find(x) == n1.end()) ans2.push_back(x);
        }
        vector<vector<int>> ans;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};