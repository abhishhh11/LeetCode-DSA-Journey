class Solution {
public:
    int digS(int n) {
        int ds = 0;
        while(n>0) {
            ds += n%10;
            n = n/10;
        }
        return ds;
    }
    int countEven(int num) {
        int ans = 0;
        for(int i=2;i<=num;i++) {
            if(digS(i)%2 == 0) ans++;
        }
        return ans;
    }
};