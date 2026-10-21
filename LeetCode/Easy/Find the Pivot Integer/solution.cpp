class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return 1;
        if(n == 2) return -1;
        int sum, sum1;
        for(int i=1;i<=n;i++) {
            sum = 0;
            sum1 = 0;
            for(int j=1;j<=i;j++) {
                sum += j;
            }
            for(int j=i;j<=n;j++) {
                sum1 += j;
            }
            if(sum == sum1) return i;
        }
        return -1;
    }
};