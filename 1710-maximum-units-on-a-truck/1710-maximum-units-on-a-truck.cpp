bool cmp(vector<int> &a, vector<int> &b) {
        return a[1] > b[1];
}
class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& arr, int k) {
        int n = arr.size();
       sort(arr.begin(), arr.end(), cmp);
       int profit = 0;
       for(int i=0;i<n;i++) {
            if(arr[i][0] <= k) {
                profit += arr[i][0] * arr[i][1];
                k -= arr[i][0];
            } else {
                profit += k*arr[i][1];
                k = 0;
            }
            if(k == 0) break;
       }
       return profit;
    }
};