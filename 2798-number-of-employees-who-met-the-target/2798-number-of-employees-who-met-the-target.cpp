class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n=hours.size();
        sort(hours.begin(), hours.end());
        if(target > hours[n-1]) return 0;
        int idx = 0;
        for(int i=0;i<n;i++) {
            if(hours[i] >= target) {
                idx = i;
                break;
            }
        }
        return (n - idx);
    }
};