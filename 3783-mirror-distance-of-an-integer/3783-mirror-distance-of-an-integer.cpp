class Solution {
public:
    int mirrorDistance(int n) {
        int x=n;
        int rev = 0;
        while(x>0) {
            //int a = x%10;
            rev = rev*10 + x%10;
            x = x/10;
        }
        return abs(n-rev);
        //return abs(n - reverse(n));
    }
};