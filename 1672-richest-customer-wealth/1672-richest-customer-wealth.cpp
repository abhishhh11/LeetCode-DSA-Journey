class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int n = acc.size();
        int mx = INT_MIN;
        int sum = 0;
        for(int i=0;i<n;i++) {
            sum = 0;
            for(int j=0;j<acc[i].size();j++) {
                sum += acc[i][j];
            }
            mx = max(mx, sum);
        }
        return mx;
    }
};