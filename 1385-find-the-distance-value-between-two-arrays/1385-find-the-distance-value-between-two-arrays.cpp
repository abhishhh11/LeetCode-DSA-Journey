class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        int ans = 0;
        int cnt = 0;
        for(int i=0;i<arr1.size();i++) {
            cnt = 0;
            for(int j=0;j<arr2.size();j++) {
                if(abs(arr1[i] - arr2[j]) > d) cnt++;
                else break;
            }
            if(cnt == arr2.size()) ans++;
        }
        return ans;
    }
};