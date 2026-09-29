class Solution {
public:
    // int rev(int n) {
    //     int x = n;
    //     int rev = 0;
    //     while(x>0) {
    //         int a = x % 10;
    //         rev = rev*10 + a;
    //         x = x/10;
    //     }
    //     return rev;
    // }
    // vector<int> separateDigits(vector<int>& nums) {
    //     vector<int> ans;
    //     for(int i=0;i<nums.size();i++) {
    //         int x = rev(nums[i]);
    //         while(x>0) {
    //             ans.push_back(x%10);
    //             x=x/10;
    //         }
    //     }
    //     return ans;
    // }

    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        string x = "";
        for(int i=0;i<n;i++) {
            x += to_string(nums[i]);
        }
        vector<int> ans;
        for(int i=0;i<x.length();i++) {
            char p = x[i];
            int y = p - '0';
            ans.push_back(y);
        }
        return ans;
    }
};