class Solution {
public:
    bool isSameAfterReversals(int num) {
        int x = num;
        int rev = 0;
        while(x > 0) {
            rev = rev*10 + x%10;
            x = x/10;
        }
        int ans = 0;
        while(rev > 0) {
            ans = ans*10 + rev%10;
            rev = rev/10;
        }
        if(ans == num) return true;
        else return false;
    }
};