class Solution {
public:
    // int fib(int n) {
    //     if(n<2) return n;
    //     else return fib(n-1) + fib(n-2);
    // }

    int fibo(int n, vector<int>& dp) {
        if(n<2) return n;
        if(dp[n] != -1) return dp[n];
        dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
        return dp[n];
    }
    int fib(int n) {
        vector<int> dp(n+1, -1);
        return fibo(n,dp);
    }
};