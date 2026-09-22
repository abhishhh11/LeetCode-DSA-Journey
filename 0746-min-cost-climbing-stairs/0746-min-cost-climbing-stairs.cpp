class Solution {
public:
    // int helper(vector<int>& cost, vector<int>& dp) {
    //     if(i < 1) return cost[i];

    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
       // vector<int> dp(n);
        // if(n < 1) return cost[n];
        // if(n == 1) return min(cost[n], cost[n-1]);
        for(int i=2;i<n;i++) {
            cost[i] += min(cost[i-1] , cost[i-2]);
        }
        return min(cost[n-1], cost[n-2]);
    }
};