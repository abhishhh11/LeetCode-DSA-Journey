class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;
        if(num == 0) return {-1, 0, 1};
        //if(num <= 5) return ans;
// time limit exceeded always see the constraints before solving the problem
        // for(int i = num/2;i>=3;i--) {
        //     if(i + i-1 + i-2 == num) {
        //         ans.push_back(i-2);
        //         ans.push_back(i-1);
        //         ans.push_back(i);
        //     }
        // }

        long long lo = 1;
        long long high = num/2;
        while(lo <= high) {
            long long mid = lo + (high - lo)/2;
            long long x = mid - 1 + mid + mid + 1;
            if(x == num) {
                ans.push_back(mid-1);
                ans.push_back(mid);
                ans.push_back(mid+1);
                return ans;
            }
            else if(x < num) lo =  mid+1;
            else high = mid-1;
        }
        return ans;
    }
};