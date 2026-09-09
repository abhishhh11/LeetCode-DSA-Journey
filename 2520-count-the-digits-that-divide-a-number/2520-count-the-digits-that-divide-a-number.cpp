class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int x = num;
        while(x>0) {
            int a = x%10;
            if(num%a == 0) cnt++;
            x = x/10;
        }
        return cnt;
    }
};