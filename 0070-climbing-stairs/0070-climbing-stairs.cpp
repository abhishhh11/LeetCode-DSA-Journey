class Solution {
public:
    vector<int> dp;
    int ftd(int n) {
        if(n<= 2) return n;
        if(dp[n] != -1) return dp[n];
        dp[n] = ftd(n-1) + ftd(n-2);
        return dp[n];
    }
    int climbStairs(int n) {
        dp.clear();
        dp.resize(50, -1);
        return ftd(n);
    }
};