class Solution {
public:
    //     int f(vector<int>& prices, int i, int k, bool on) {
    //         if(i == prices.size()) return 0;
    //         int ans = INT_MIN;
    //         ans = f(prices, i+1, k, on); // if we are avoiding the current
    //         stock
    // // if we are not avoiding the current stock and choosing it to buy
    //         if(on) {
    //             ans = max(ans, prices[i]+f(prices, i+1, k-1, false));
    //         }
    //         else {
    //             if(k>0) ans = max(ans, f(prices, i+1, k, true) - prices[i]);
    //         }
    //         return ans;
    //     }

    // applying dp
    // rather than making a 3d vector which create complications in implication
    // we will use a 3d array
    int dp[1005][105][2]; // -> 1005 prices size, 105 k size, 2 true or false

    int ftd(vector<int>& prices, int i, int k, bool on) {
        if (i == prices.size())
            return 0;
        if (dp[i][k][on] != -1) return dp[i][k][on];
        int ans = INT_MIN;
        ans = ftd(prices, i + 1, k, on); // if we are avoiding the current stock
        // if we are not avoiding the current stock and choosing it to buy
        if (on) {
            ans = max(ans, prices[i] + ftd(prices, i + 1, k - 1, false));
        } else {
            if (k > 0)
                ans = max(ans, ftd(prices, i + 1, k, true) - prices[i]);
        }
        return dp[i][k][on] = ans;
    }

    int maxProfit(int k, vector<int>& prices) {
        // return f(prices, 0, k, false);

        memset(dp, -1, sizeof dp);
        return ftd(prices, 0, k, false);
    }
};