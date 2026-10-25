class Solution {
public:
    // int f(vector<int>& prices, int i, int k, bool on) {
    //     if(i == prices.size()) return 0;
    //     int ans = INT_MIN;
    //     ans = f(prices, i+1, k, on);
    //     if(on) {
    //         ans = max(ans, prices[i] + f(prices, i+1, k-1, false));
    //     }
    //     else{
    //         if(k>0) ans = max(ans, f(prices, i+1, k, true) - prices[i]);
    //     }
    //     return ans;
    // }

    int dp[30005][2];
    int f(vector<int>& prices, int i, bool on) {
        if(i == prices.size()) return 0;
        if(dp[i][on] != -1) return dp[i][on];
        int ans = INT_MIN;
        ans = f(prices, i+1, on);
        if(on) {
            ans = max(ans, prices[i] + f(prices, i+1, false));
        }
        else{
            ans = max(ans, f(prices, i+1, true) - prices[i]);
        }
        return dp[i][on] = ans;
    }

    int maxProfit(vector<int>& prices) {
        memset(dp, -1, sizeof dp);
        return f(prices, 0, false);
    }
};