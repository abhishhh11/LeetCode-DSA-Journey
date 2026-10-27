class Solution {
public:
    double dp[30][30][105];
    int dx[8] = {1,2,1,2,-1,-2,-1,-2};
    int dy[8] = {2,1,-2,-1,2,1,-2,-1};
    double f(int n, int i, int j, int k) {
        if (i < 0 || j < 0 || i >= n || j >= n)
            return 0.0;
        if (k == 0)
            return 1.0;
        if (dp[i][j][k] > -0.9)
            return dp[i][j][k];
        double ans = 0.0;
        for(int m = 0;m<8;m++) {
            ans += f(n, i+dx[m], j+dy[m], k-1)*(0.125);
        }
        // ans = (0.125) * (f(n, i + 2, j - 1, k - 1) + f(n, i - 2, j + 1, k - 1) +
        //                  f(n, i - 1, j - 2, k - 1) + f(n, i - 1, j + 2, k - 1) +
        //                  f(n, i + 1, j - 2, k - 1) + f(n, i + 1, j + 2, k - 1) +
        //                  f(n, i - 2, j - 1, k - 1) + f(n, i + 2, j + 1, k - 1));
        return dp[i][j][k] = ans;
    }
    double knightProbability(int n, int k, int row, int column) {
        // memset(dp, -1.0, sizeof dp);
        for (int i = 0; i < 30; i++) {
            for (int j = 0; j < 30; j++) {
                for (int k = 0; k < 105; k++) {
                    dp[i][j][k] = -1.0;
                }
            }
        }
        return f(n, row, column, k);
    }
};