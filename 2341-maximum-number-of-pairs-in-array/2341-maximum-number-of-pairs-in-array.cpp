class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int ans0 = 0;
        int ans1 = 0;
        map<int, int> mp;
        for(int i = 0;i<nums.size();i++) {
            mp[nums[i]]++;
        }
        for(auto x : mp) {
            if(x.second == 1) {
                ans1++;
                //mp.erase(x.first);
            }
            else if(x.second >= 2 && x.second%2 == 0) {
                ans0 += x.second/2;
            }
            else if(x.second > 2 && x.second%2 != 0) {
                ans0 += x.second/2;
                ans1++;
            }
        }
        return {ans0, ans1};
    }
};