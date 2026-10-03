#define ll long long int
#define mod 1000000007
class Solution {
public:
    vector<vector<ll>> dp;

    ll f(int n, int k, int t) {
        if(n == 0 && t == 0) return 1;
        if(n==0) return 0;
        ll sum = 0;
        for(int v=1;v<=k;v++) {
            sum += f(n-1, k, t - v);
        }
        return sum;
    }

    ll ftd(int n, int k, int t) {
        if(n == 0 && t==0) return 1;
        if(n==0) return 0;
        ll sum = 0;
        if(dp[n][t] != -1) return dp[n][t];
        for(int v=1;v<=k;v++) {
            if(t - v < 0) continue;
            sum = (sum % mod + ftd(n-1, k , t - v) % mod) % mod ;
        }
        return dp[n][t] = sum;
    }

    int numRollsToTarget(int n, int k, int t) {
       // return f(n,k,target);
       dp.clear();
       dp.resize(35, vector<ll> (1005, -1));
       return ftd(n,k,t);
    }
};